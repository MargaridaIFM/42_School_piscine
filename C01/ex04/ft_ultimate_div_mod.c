/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 09:49:24 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/29 17:53:07 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	if (temp_b != 0)
	{
		*a = temp_a / temp_b;
		*b = temp_a % temp_b;
	}
}
/*
int	main(void)
{
	int c;
	int d;

	c = 10;
	d = 3;

	ft_ultimate_div_mod(&c, &d);
	printf("%d, %d", c, d);
	return (0);
}*/
