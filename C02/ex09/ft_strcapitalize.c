/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:06:25 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/30 17:22:02 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	ft_strlowcase(str);
	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 0)
			{
				str[i] -= 32;
				check = 1;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			check = 1;
		}
		else
			check = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char phrase[] = "ola, tudo bem? 42palaVras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(phrase));
	return (0);
}*/
