/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 15:21:34 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/03 15:33:53 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Copies an array of integers from `src` to `dest`.
 * Assumes the destination has the correct size.
 */
void	ft_copy_array(int *dest, int *src, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
}

/*
 * Copies an array of integers from `src` to the given
 * column of `dest`.
 * Assumes the destination has the correct size.
 */
void	ft_copy_array_across(int **dest, int dest_column, int *src, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		dest[idx][dest_column] = src[idx];
		idx++;
	}
}
