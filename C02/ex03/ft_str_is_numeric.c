/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:19:33 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/29 14:26:14 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	numbers[] = "12345";
	char 	leters []= "12d";
	char 	empty[] = "";
	char	space_symbol[] = "12 3";
	
	printf("%d\n", ft_str_is_numeric(numbers));
	printf("%d\n", ft_str_is_numeric(leters));
	printf("%d\n", ft_str_is_numeric(empty));
	printf("%d\n", ft_str_is_numeric(space_symbol));
	return(0);
}*/
