/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:28:08 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/28 10:51:22 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	nr1;
	int	nr2;
	int	*nr3;
	int	*nr4;
	int	nr_3;
	int	nr_4;

	nr1 = 10;
	nr2 = 5;
	nr3 = &nr_3;
	nr4 = &nr_4;
	ft_div_mod(nr1, nr2, nr3, nr4);
	printf("%d, %d", nr_3, nr_4);
	return (0);
}*/
