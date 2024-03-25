/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:10:51 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/13 17:10:52 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	*range = malloc((max - min) * sizeof(int));
	if (!(*range))
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/* int main (void)
{
	int	*range;
	int	min;
	int	max;
	int	size;

	min = 1;
	max = 8;
	size = ft_ultimate_range(&range, min, max);
	for(int i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
		free(range); // Don't forget to free the allocated memory
		printf("\n");
	return(0); */
}
