/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:30:03 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/10 17:22:02 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	final_nr;

	minus = 0;
	final_nr = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		final_nr = (final_nr * 10) + (str[i] - '0');
		i++;
	}
	if (minus % 2 == 1)
		final_nr *= -1;
	return (final_nr);
}
int	main(void)
{
	char *str = " ---+--+-1234ab567";
    char *str1 = " ---+--+01234ab567";
    char *str2 = " ---+--+-	2345ab567";
	printf("%d\n", ft_atoi(str));
    printf("%d\n", ft_atoi(str1));
    printf("%d\n", ft_atoi(str2));
	return (0);
}