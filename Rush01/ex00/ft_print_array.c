/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:28:01 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:28:04 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Write a function `void ft_print_digit_array(int *array, int size)`.
 * This function will print an array of digits with the given size.
 * Assume all integers in the array are numbers 0 - 9.
 * Numbers must be separated by spaces and with a trailing newline.
 *
 * Allowed function: write.
 *
 * Examples:
 * int *example = {1, 2, 3, 4};
 * ft_print_digit_arrays(example, 4);
 * 1 2 3 4
 */
void	ft_print_digit_array(int *array, int size)
{
	int		idx;
	char	c;

	idx = 0;
	while (idx < size)
	{
		c = array[idx] + 48;
		write(1, &c, 1);
		if (idx + 1 < size)
			write(1, " ", 1);
		idx++;
	}
	write(1, "\n", 1);
}

/*
 * Write a function `void ft_print_digit_matrix(int **matrix, int size)`.
 * This function will print a square matrix of digits with the given size.
 * Assumes all integers in the matrix are 0 - 9.
 *
 * Allowed functions: ft_print_digit_array.
 */
void	ft_print_digit_matrix(int **matrix, int size)
{
	int	idx;

	idx = -1;
	while (++idx < size)
		ft_print_digit_array(matrix[idx], size);
}
