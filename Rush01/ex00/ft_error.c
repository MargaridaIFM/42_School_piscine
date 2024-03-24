/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 23:34:31 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:10:31 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
 * Write a function `void ft_error(void)` that prints the message
 * "Error" followed by a newline.
 *
 * Allowed functions: write.
 */
void	ft_error(void)
{
	char	*x;
	int		i;

	x = "Error";
	i = 0;
	while (x[i])
	{
		ft_putchar(x[i]);
		i++;
	}
	ft_putchar('\n');
}

/*
int	main(void)
{
	ft_error();
}
*/
