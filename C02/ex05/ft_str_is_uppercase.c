/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:27:19 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/29 14:44:03 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else 
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	lowercase[] = "hello";
	char 	empty[] = "";
	char	uppercase[] = "HELLO";
	char	space_symbol[] = "HELLO*";

	printf("%d\n", ft_str_is_uppercase(lowercase));
	printf("%d\n", ft_str_is_uppercase(empty));
	printf("%d\n", ft_str_is_uppercase(uppercase));
	printf("%d\n", ft_str_is_uppercase(space_symbol));
}*/
