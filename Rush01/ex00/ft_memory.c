/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:28:35 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:29:05 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * Write a function
 * `void ft_init_memory_nested(int **pointer, int length, int sub_length)`.
 * The function will initialise `pointer` with enough memory to hold a total
 * of `length` pointers to integer (`int *`).
 * In turn, each of those sub-pointers will be initialised with enough
 * memory to hold a total of `sub_length` integers.
 * All of the values will be initialised with 0.
 *
 * Allowed functions: malloc.
 *
 * Examples:
 * ft_init_memory_nested(pointers, 10, 5) will give `pointers` enough memory
 * to hold 10 pointers to integer.
 * Then, pointers[0], pointers[1], ..., pointers[9], will be given enough
 * memory to hold 5 integers each and each value will be set to 0.
 */
void	ft_init_memory_nested(int ***pointer, int length, int sub_length)
{
	int	sub_ptr;
	int	idx;

	*pointer = malloc(length * sizeof (int *));
	sub_ptr = 0;
	while (sub_ptr < length)
	{
		(*pointer)[sub_ptr] = malloc(sub_length * sizeof (int));
		idx = 0;
		while (idx < sub_length)
		{
			(*pointer)[sub_ptr][idx] = 0;
			idx++;
		}
		sub_ptr++;
	}
}

/*
 * Write a function `void ft_free_memory_nested(int **pointer, int length)`.
 * The function will free a total of `length` subpointers inside `pointer`.
 * Finally, it will free the memory from `pointer`.
 *
 * Allowed functions: free.
 *
 * Examples:
 * ft_free_memory_nested(pointer, 10) will go over pointer[0], pointer[1],
 * ..., pointer[9], and free all those pointers.
 * Finally, it also frees `pointer`.
 */
void	ft_free_memory_nested(int ***pointer, int length)
{
	int	idx;

	idx = 0;
	while (idx < length)
	{
		free((*pointer)[idx]);
		idx++;
	}
	free(*pointer);
}

/*
 * Write a function `int ****ft_init_formatted_views(int view_length)`.
 * This function initialises the outer part of a 4D array so that we
 * can save all of the sorted views in it.
 */
int	****ft_init_formatted_views(int view_length)
{
	int	****result;
	int	row;

	result = malloc((view_length + 1) * sizeof (int ***));
	row = 1;
	while (row <= view_length)
	{
		result[row] = malloc((view_length + 1) * sizeof (int **));
		row++;
	}
	return (result);
}

/*
 * Write a function
 * `void ft_clean_formatted_views(int ****views, int view_length)`.
 * This function cleans up the result from `ft_init_formatted_views`.
 */
void	ft_clean_formatted_views(int ****views, int view_length)
{
	int	row;

	row = 1;
	while (row <= view_length)
	{
		free(views[row]);
		row++;
	}
	free(views);
}
