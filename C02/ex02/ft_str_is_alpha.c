/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:56:29 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/31 19:42:22 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		c = str[i];
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int	main(void)
{
	char	string_l[] = "Hello";
	char	string_nr[] = "H3ll0";
	char 	string_empty[] = "";
	char 	string_space_symbol[] = "Hello World";

	printf("%d\n", ft_str_is_alpha(string_l));
	printf("%d\n", ft_str_is_alpha(string_nr));
	printf("%d\n", ft_str_is_alpha(string_empty));
	printf("%d\n", ft_str_is_alpha(string_space_symbol));

	return(0);
}*/
