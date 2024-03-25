/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:32:22 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/13 17:11:51 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	return (counter);
}

char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size_len;

	size_len = ft_strlen(src) + 1;
	dest = (char *)malloc(size_len * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/* 
int	main(void)
{
	char *src;

	src = "hello";
	printf("%s\n", ft_strdup(src));
} */
