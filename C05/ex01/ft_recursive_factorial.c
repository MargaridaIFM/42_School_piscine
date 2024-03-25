/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:49:43 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/05 12:56:27 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	nb_fact;

	nb_fact = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		nb_fact = 1;
	}
	else if (nb > 1)
	{
		nb_fact *= ft_recursive_factorial(nb - 1);
		return (nb_fact);
	}
	return (nb_fact);
}
/* int	main(void)
 {
		printf("%d \n", ft_recursive_factorial(0));
		printf("%d \n", ft_recursive_factorial(1));
		printf("%d \n", ft_recursive_factorial(4));
		printf("%d \n", ft_recursive_factorial(13));
		return (0);
 } */