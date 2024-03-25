/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:49:55 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/05 09:27:50 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (index);
	}
}
/* int	main(void)
{
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(-1));
	printf("%d \n", ft_fibonacci(10));
	printf("%d \n", ft_fibonacci(16));
	return (0);
} */