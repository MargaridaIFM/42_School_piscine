/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_views.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:53:26 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 11:57:26 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>

int		ft_factorial(int nb);
void	ft_init_memory_nested(int ***pointer, int length, int sub_length);
int		****ft_init_formatted_views(int view_length);
void	ft_copy_array(int *dest, int *src, int size);
int		ft_find(int *haystack, int size, int needle);
int		ft_check_views(int *array, int size, int left, int right);

/*
 * Auxiliary function that recursively builds permutations.
 * Whenever a permutation is finished, we store it at the beginning
 * of the pointer `store`.
 * We assume `store` has enough space.
 */
int	**build_permutations(int *perm, int size, int n, int **store)
{
	int	cand;

	if (n == size)
	{
		ft_copy_array(store[0], perm, size);
		return (store + 1);
	}
	cand = 1;
	while (cand <= size)
	{
		if (ft_find(perm, n, cand))
		{
			cand++;
			continue ;
		}
		perm[n] = cand;
		store = build_permutations(perm, size, n + 1, store);
		cand++;
	}
	return (store);
}

/*
 * Write a function `int ft_all_views(int ***views, int view_length)`.
 * The objective of this function is to generate _all_ valid views
 * of the given length.
 * The function accepts a parameter `int ***views`. Inside `*views`
 * we must allocate enough memory for all views.
 * The function returns the total number of views computed.
 * The last view is also signaled by a final sequence of 0s.
 *
 * Allowed functions: ft_init_memory_nested, ft_factorial.
 *
 * Examples:
 * ft_all_views(views, 3) should allocate memory inside `*views`
 * for the following views:
 * - 1 2 3
 * - 1 3 2
 * - 2 1 3
 * - 2 3 1
 * - 3 1 2
 * - 3 2 1
 * The function should return 6 because it computed 6 views.
 */
int	ft_all_views(int ***views, int view_length)
{
	int	total;
	int	*perm;

	total = ft_factorial(view_length);
	ft_init_memory_nested(views, total + 1, view_length);
	perm = malloc(view_length * sizeof (int));
	build_permutations(perm, view_length, 0, *views);
	free(perm);
	return (total);
}

/*
 * Write a function `int **ft_filter_views(
 *   int **all_views, int view_length, int left, int right
 * )`.
 * The function accepts `all_views`, which is a sequence of all of the views
 * that exist with the given length `view_length`.
 * The integer `total_views` is the number of views stored in `all_views`.
 * The function will go through all of those views and find the ones that
 * satisfy the given `left` and `right` restrictions when we look at the boxes
 * with those sizes.
 * The function will allocate memory to store them, and it will return that
 * sequence.
 * To indicate that no more views were found, the last "view" starts with a 0.
 *
 * Allowed functions: malloc.
 *
 * Example:
 * int	***views_1_4;
 * int	***views;
 * int	total_views;
 * total_views = ft_all_views(views, 4);  // Compute all views of length 4.
 * views_1_4 = ft_filter_views(views, 4, 1, 2);
 * // Compute all views who show 1 box from the left and 2 from the right.
 * This should find the given views:
 * - 4 1 3 2
 * - 4 2 3 1
 * - 4 3 1 2
 */
int	**ft_filter_views(int **all_views, int view_length, int left, int right)
{
	int	*satisfy;
	int	idx;
	int	count;
	int	**filtered;
	int	total_views;

	total_views = ft_factorial(view_length);
	satisfy = malloc(total_views * sizeof (int));
	idx = 0;
	count = 0;
	while (idx < total_views)
	{
		satisfy[idx] = ft_check_views(all_views[idx], view_length, left, right);
		count += satisfy[idx];
		idx++;
	}
	ft_init_memory_nested(&filtered, count + 1, view_length);
	while (--idx >= 0 && count)
		if (satisfy[idx])
			ft_copy_array(filtered[--count], all_views[idx], view_length);
	free(satisfy);
	return (filtered);
}

/*
 * Write a function `int ****ft_format_views(int view_length)`.
 * The function will compute all of the views with the given length,
 * but it will store them in a convenient format.
 * If `views` is the return result of this function, then
 * `views[x][y]` should be a sequence of all of the views that show
 * `x` boxes from the left and `y` boxes from the right.
 * To signal that there are no more views in a given sequence, the next
 * view starts with a 0.
 *
 * Allowed functions: ft_all_views, ft_filter_views, free.
 *
 * Example:
 * int ***formatted_views;
 * formatted_views = ft_format_views(4);
 * formatted_views[1][2] should be a sequence of all of the views of length
 * 4 that show 1 box from the left and 2 boxes from the right.
 * So, we should have:
 * - formatted_views[1][2][0]: 4 1 3 2
 * - formatted_views[1][2][1]: 4 2 3 1
 * - formatted_views[1][2][2]: 4 3 1 2
 * - formatted_views[1][2][3]: 0 0 0 0 <- this marks the end.
 */
int	****ft_format_views(int view_length)
{
	int	****formatted;
	int	**all_views;
	int	row;
	int	col;

	formatted = ft_init_formatted_views(view_length);
	all_views = NULL;
	ft_all_views(&all_views, view_length);
	row = 1;
	while (row <= view_length)
	{
		col = 1;
		while (col <= view_length)
		{
			formatted[row][col] = ft_filter_views(
					all_views, view_length, row, col);
			col++;
		}
		row++;
	}
	return (formatted);
}

/*
#include <stdio.h>
void	ft_print_digit_array(int *array, int size);
int	main(void)
{
	int	idx;
	int ****formatted = ft_format_views(4);
	for (int row = 1; row <= 4; row++)
	{
		for (int col = 1; col <= 4; col++)
		{
			printf("\n\n%d %d\n", row, col);
			idx = 0;
			while (formatted[row][col][idx][0])
			{
				ft_print_digit_array(formatted[row][col][idx], 4);
				idx++;
			}
		}
	}
}
*/
