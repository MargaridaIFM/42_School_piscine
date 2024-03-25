/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:37:53 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/29 14:16:24 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
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
	char	space_symbol[] = "hello*";	
	
	printf("%d\n", ft_str_is_lowercase(lowercase));
	printf("%d\n", ft_str_is_lowercase(empty));
	printf("%d\n", ft_str_is_lowercase(uppercase));
	printf("%d\n", ft_str_is_lowercase(space_symbol));
	return(0);
}*/
