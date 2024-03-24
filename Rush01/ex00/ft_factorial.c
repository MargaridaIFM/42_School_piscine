/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:29:14 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:29:15 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Write a function `int ft_factorial(int nb)`.
 * The function computes and returns the factorial of the parameter `nb`.
 * See C05, ex00 or ex01.
 * Do not worry about overflows.
 *
 * Allowed functions: none.
 *
 * Examples:
 * ft_factorial(1) should return 1.
 * ft_factorial(2) should return 2.
 * ft_factorial(3) should return 6.
 * ft_factorial(4) should return 24.
 * ft_factorial(5) should return 120.
 * ft_factorial(9) should return 362880.
 */
int	ft_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
