/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:31:02 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/27 10:21:17 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	nr1;
	int	nr2;
	int	nr3;

	nr1 = '0';
	while (nr1 <= '7')
	{
		nr2 = nr1 + 1;
		while (nr2 <= '8')
		{
			nr3 = nr2 + 1;
			while (nr3 <= '9')
			{
				write(1, &nr1, 1);
				write(1, &nr2, 1);
				write(1, &nr3, 1);
				if (nr1 != '7')
					write(1, "," " ", 2);
				nr3++;
			}
			nr2++;
		}
		nr1++;
	}
}
