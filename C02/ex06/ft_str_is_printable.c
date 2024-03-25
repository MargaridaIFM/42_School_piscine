/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:46:28 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/31 19:34:18 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int 	main(void)
{
	char	space[] = "hello ";
	char 	empty[] = "";
	char	string[] = "H3Llo";
	char	symbol[] = "hello*";	
	
	printf("%d\n", ft_str_is_printable(space));
	printf("%d\n", ft_str_is_printable(empty));
	printf("%d\n", ft_str_is_printable(string));
	printf("%d\n", ft_str_is_printable(symbol));
	return(0);
}*/
