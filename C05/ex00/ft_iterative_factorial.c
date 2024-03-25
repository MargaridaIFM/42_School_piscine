/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:21:29 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/05 09:23:31 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
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
	while (nb > 1)
	{
		nb--;
		nb_fact = nb_fact * nb;
	}
	return (nb_fact);
}
/* int	main(void)
{
	int nb;

	nb = 5;

	printf("%d \n", ft_iterative_factorial(nb));
} */