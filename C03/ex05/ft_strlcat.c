/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:03:25 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/07 13:53:40 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dest);
	if (size <= i)
	{
		return (size + ft_strlen(src));
	}
	j = 0;
	while (src[j] && size > i + 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
int main(void)
{
	char			src[] = "world";
	char			dest[20] = "Hello ";
	char			dest2[20] = "Hello ";
	char			src2[] = "world";
	printf("%u \n", ft_strlcat(dest, src, 8));
	printf("%s \n", dest);
	printf("%u \n", strlcat(dest2, src2, 8));
	printf("%s \n", dest2);
	return (0);
		// Nota: a funcao retorna o comprimento da string que teria
		//sido gerada se nao houvesse limitacao de tamanho,
		//mas so concatena ate ao tamanhao que especificamos (size)
}