/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_views.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:00:20 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:29:52 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Write a function `int ft_check_left_view(int *array, int size, int view)`.
 * The function should check if the given array, with the given size,
 * satisfies the given left view.
 * In other words, the function must look at the given array from the left
 * and determine how many boxes it can see from the left.
 * Then, it returns 1 if that number matches the parameter `view` and
 * `0` otherwise.
 *
 * Allowed functions: none.
 *
 * Examples:
 *
 *             ooo
 *     ooo     ooo
 * ooo ooo     ooo
 * ooo ooo ooo ooo
 *  2   3   1   4
 *
 * ft_check_left_view({2, 3, 1, 4}, 4, 1) should return 0.
 * ft_checl_left_view({2, 3, 1, 4}, 4, 2) should return 0.
 * ft_check_left_view({2, 3, 1, 4}, 4, 3) should return 1.
 * ft_check_left_view({2, 3, 1, 4}, 4, 4) should return 0.
 *
 *     ooo
 *     ooo         ooo
 *     ooo ooo     ooo
 * ooo ooo ooo     ooo
 * ooo ooo ooo ooo ooo
 *  2   5   3   1   4
 *
 * ft_check_left_view({3, 1, 2, 4, 5}, 5, 1) should return 0.
 * ft_check_left_view({2, 5, 3, 1, 4}, 5, 2) should return 1.
 * ft_check_left_view({2, 5, 3, 1, 4}, 5, 3) should return 0.
 * ft_check_left_view({2, 5, 3, 1, 4}, 5, 4) should return 0.
 * ft_check_left_view({2, 5, 3, 1, 4}, 5, 5) should return 0.
 */

int	ft_check_left_view(int *array, int size, int view)
{
	int	i;
	int	vision;
	int	max;

	i = 0;
	vision = 0;
	max = 0;
	while (i < size)
	{
		if (array[i] == size)
		{
			vision++;
			i = size;
		}
		else if (array[i] > max)
		{
			max = array[i];
			vision++;
		}
		i++;
	}
	if (vision == view)
		return (1);
	else
		return (0);
}
/*
 * Write a function `int ft_check_right_view(int *array, int size, int view)`.
 * The function should check if the given array, with the given size,
 * satisfies the given right view.
 * In other words, the function must look at the given array from the right
 * and determine how many boxes it can see from the right.
 * Then, it returns 1 if that number matches the parameter `view` and
 * `0` otherwise.
 *
 * Allowed functions: none.
 *
 * Examples:
 *
 *             ooo
 *     ooo     ooo
 * ooo ooo     ooo
 * ooo ooo ooo ooo
 *  2   3   1   4
 *
 * ft_check_right_view({2, 3, 1, 4}, 4, 1) should return 1.
 * ft_checl_right_view({2, 3, 1, 4}, 4, 2) should return 0.
 * ft_check_right_view({2, 3, 1, 4}, 4, 3) should return 0.
 * ft_check_right_view({2, 3, 1, 4}, 4, 4) should return 0.
 *
 *     ooo
 *     ooo         ooo
 *     ooo ooo     ooo
 * ooo ooo ooo     ooo
 * ooo ooo ooo ooo ooo
 *  2   5   3   1   4
 *
 * ft_check_right_view({2, 5, 3, 1, 4}, 5, 1) should return 0.
 * ft_check_right_view({2, 5, 3, 1, 4}, 5, 2) should return 1.
 * ft_check_right_view({2, 5, 3, 1, 4}, 5, 3) should return 0.
 * ft_check_right_view({2, 5, 3, 1, 4}, 5, 4) should return 0.
 * ft_check_right_view({2, 5, 3, 1, 4}, 5, 5) should return 0.
 */

int	ft_check_right_view(int *array, int size, int view)
{
	int	i;
	int	vision;
	int	max;

	i = size - 1;
	vision = 0;
	max = 0;
	while (i >= 0)
	{
		if (array[i] == size)
		{
			vision++;
			i = -1;
		}
		else if (array[i] > max)
		{
			max = array[i];
			vision++;
		}
		i--;
	}
	if (vision == view)
		return (1);
	else
		return (0);
}

/*
 * Write a function `int ft_check_views(
 * 		int *array, int size, int left, int right).`
 * The function checks if the given array with the given size satisfies the
 * given left and right views.
 *
 * Allowed functions: ft_check_left_view, ft_check_right_view.
 *
 * Examples:
 * ft_check_views({2, 5, 3, 1, 4}, 5, 1, 5) should return 0.
 * ft_check_views({2, 5, 3, 1, 4}, 5, 2, 2) should return 1.
 * ft_check_views({2, 5, 3, 1, 4}, 5, 1, 2) should return 0.
 * ft_check_views({2, 5, 3, 1, 4}, 5, 2, 4) should return 0.
 */
int	ft_check_views(int *array, int size, int left, int right)
{
	int	l;
	int	r;

	l = ft_check_left_view(array, size, left);
	r = ft_check_right_view(array, size, right);
	if (l == 1 && r == 1)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	array[] = {5, 1, 4, 3, 2, 6};
	for (int idx = 1; idx <= 6; idx++)
	{
		printf(
				"Check left views with %d returned %d\n",
				idx, ft_check_left_view(&array[0], 6, idx));
	}
	for (int idx = 1; idx <= 6; idx++)
	{
		printf(
				"Check right views with %d returned %d\n",
				idx, ft_check_right_view(&array[0], 6, idx));
	}
}
*/
