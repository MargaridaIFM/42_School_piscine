/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:09:50 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/13 17:25:15 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nr1;
	int	nr2;

	nr1 = 0;
	while (nr1 <= 98)
	{
		nr2 = nr1 + 1;
		while (nr2 <= 99)
		{
			ft_putchar(nr1 / 10 + '0');
			ft_putchar(nr1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nr2 / 10 + '0');
			ft_putchar(nr2 % 10 + '0');
			if (nr1 != 98)
				write(1, ", ", 2);
			nr2++;
		}
		nr1++;
	}
}
/* int main(void)
{
	ft_print_comb2();
} */