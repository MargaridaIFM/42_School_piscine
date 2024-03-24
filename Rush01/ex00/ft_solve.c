/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:28:18 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:43:46 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_error(void);
void	ft_copy_array(int *dest, int *src, int size);
void	ft_copy_array_across(int **dest, int dest_column, int *src, int size);
int		****ft_format_views(int view_length);
int		ft_check_views(int *array, int size, int left, int right);
void	ft_print_digit_array(int *array, int size);
void	ft_print_digit_matrix(int **matrix, int size);
void	ft_init_memory_nested(int ***pointer, int length, int sub_length);
void	ft_free_memory_nested(int ***pointer, int length);
void	ft_clean_formatted_views(int ****views, int view_length);
int		ft_find(int *haystack, int size, int needle);
int		ft_matrix_find(int **matrix, int columns, int rows, int *needles);

/*
 * Checks if the given array contains all numbers from 1 to size.
 */
int	all_unique(int *array, int size)
{
	int	*found;
	int	idx;

	found = malloc(size * sizeof (int));
	idx = 0;
	while (idx < size)
	{
		if (found[array[idx] - 1])
		{
			free(found);
			return (0);
		}
		found[array[idx] - 1] = 1;
		idx++;
	}
	free(found);
	return (1);
}

/*
 * Checks if the board is solved.
 * Assumes the columns are correct, only checks the rows.
 * First it checks the rows contain all the unique numbers it needs.
 * Then it checks they satisfy the view restrictions.
 */
int	is_solved(int **board, int *views, int size)
{
	int	idx;

	idx = -1;
	while (++idx < size)
		if (!all_unique(board[idx], size))
			return (0);
	idx = -1;
	while (++idx < size)
		if (!ft_check_views(board[idx], size,
				views[2 * size + idx], views[3 * size + idx]))
			return (0);
	ft_print_digit_matrix(board, size);
	return (1);
}

/*
 * Computes the size of the board from the length of the views.
 * Assumes `views` ends with a 0.
 */
int	_size(int *views)
{
	int	length;

	length = 0;
	while (views[length])
		++length;
	return (length / 4);
}

/*
 * Recursively solves the board.
 */
int	_solve(int **board, int *views, int ****formatted, int col)
{
	int	idx;
	int	up;
	int	down;
	int	size;
	int	solved;

	solved = 0;
	size = _size(views);
	if (col == size)
		return (is_solved(board, views, size));
	up = views[col];
	down = views[col + size];
	idx = -1;
	while (formatted[up][down][++idx][0] && !solved)
	{
		if (ft_matrix_find(board, col, size, formatted[up][down][idx]))
			continue ;
		ft_copy_array_across(board, col, formatted[up][down][idx], size);
		solved = _solve(board, views, formatted, col + 1);
	}
	return (solved);
}

/*
 * Write a function `void solve(int *views, int size)`.
 * The function `solve` will try to fill the given board of the given size
 * by satisfying all of the restrictions imposed by the given views.
 *
 * Allowed functions: Any ft_* function, free.
 */
void	solve(int *views, int size)
{
	int	****formatted;
	int	**board;
	int	found;

	board = NULL;
	formatted = ft_format_views(size);
	ft_init_memory_nested(&board, size, size);
	found = _solve(board, views, formatted, 0);
	if (!found)
		ft_error();
	ft_free_memory_nested(&board, size);
	ft_clean_formatted_views(formatted, size);
}

/*
#include <stdio.h>
int main(void)
{
    // int **board = NULL;
    // ft_init_memory_nested(&board, 4, 4);
    // int row1[] = {1, 2, 3, 4};
    // int row2[] = {2, 3, 4, 1};
    // int row3[] = {3, 4, 1, 2};
    // int row4[] = {4, 1, 2, 3};
    // ft_copy_array(board[0], &row1[0], 4);
    // ft_copy_array(board[1], &row2[0], 4);
    // ft_copy_array(board[2], &row3[0], 4);
    // ft_copy_array(board[3], &row4[0], 4);
    // int views[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2, 0};
    // ft_print_digit_matrix(board, 4);
    // printf("%d\n", is_solved(board, &views[0], 4));
    // ft_free_memory_nested(&board, 4);

	int views[] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2, 0};
	solve(&views[0], 4);
}
*/
