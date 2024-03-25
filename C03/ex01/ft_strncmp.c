/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:04:41 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/03 08:25:16 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/* int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "HelloWorld", 8));
	printf("%d\n", ft_strncmp("Hello", "HelloWorld", 4));
	printf("%d\n", ft_strncmp("HelloWorld", "Hello", 8));
	printf("%d\n", strncmp("Hello", "HelloWorld", 8));
	printf("%d\n", strncmp("Hello", "HelloWorld", 4));
	printf("%d\n", strncmp("HelloWorld", "Hello", 8));
} */
