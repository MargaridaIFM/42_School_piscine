/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:30:40 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:44:03 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Check if the given number (needle) is in the given array (haystack).
 */
int	ft_find(int *haystack, int size, int needle)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (haystack[idx] == needle)
			return (1);
		idx++;
	}
	return (0);
}

/*
 * Check if any of the rows of a matrix contain a corresponding
 * number in the given array.
 */
int	ft_matrix_find(int **matrix, int columns, int rows, int *needles)
{
	int	idx;

	idx = 0;
	while (idx < rows)
	{
		if (ft_find(matrix[idx], columns, needles[idx]))
			return (1);
		idx++;
	}
	return (0);
}
