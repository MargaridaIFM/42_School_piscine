/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:15:33 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/28 11:55:19 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	nr1;
	int	nr2;

	nr1 = 6;
	nr2 = 8;
	ft_swap(&nr1, &nr2);
	printf("%d, ", nr1);
	printf("%d", nr2);
	return (0);
}*/
