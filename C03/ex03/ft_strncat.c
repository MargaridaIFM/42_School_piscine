/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:14:53 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/07 13:51:44 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (nb == 0)
		return (dest);
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int	main(void)
{
	char src[] = "world";
	char dest[100] = "Hello ";
	char src1[] = "By ";
	char dest1[100] = "Good ";
	unsigned int n = 20;
	unsigned int n1 = 9;
	//printf("%s \n", ft_strncat(dest, src, 3));
	//printf("%s \n", ft_strncat(dest1, src1, n1));
	//printf("%s \n", ft_strncat(dest1, src, n));
	printf ("%s \n", strncat(dest1, src1, n1));
	printf ("%s \n", strncat(dest1, src, n));
	printf("%s", dest1);
}