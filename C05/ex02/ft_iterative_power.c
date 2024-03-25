/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:34:12 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/05 09:24:57 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_power;

	nb_power = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb_power = nb_power * nb;
		power--;
	}
	return (nb_power);
}
/*
int	main(void)
{
	printf("(2, 9)%d \n", ft_iterative_power(2, 9));
	printf("(0, 0) %d \n", ft_iterative_power(0, 0));
	printf("(0, 1) %d \n", ft_iterative_power(0, 1));
	printf("(-2, 9) %d \n", ft_iterative_power(-2, 9));
	printf("(-2, -4 )%d \n", ft_iterative_power(-2, -4));
} */