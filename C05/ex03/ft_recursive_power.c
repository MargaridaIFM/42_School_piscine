/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:10:57 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/05 12:57:36 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	nb_power;

	nb_power = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if (power > 1)
	{
		nb_power *= ft_recursive_power(nb_power, --power);
		return (nb_power);
	}
	return (nb_power);
}
/* int	main(void)
{
	printf("(2, 9)%d \n", ft_recursive_power(2, 9));
	printf("(0, 0) %d \n", ft_recursive_power(0, 0));
	printf("(0, 1) %d \n", ft_recursive_power(0, 1));
	printf("(-2, 9) %d \n", ft_recursive_power(-2, 9));
	printf("(-2, -4 )%d \n", ft_recursive_power(-2, -4));
} */