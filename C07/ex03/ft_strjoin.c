/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:43:28 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/12 16:36:26 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int ft_total_length(char **str)
{
    int i;
    i = 0;
    while(*str[i])
	{	
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *cat_str;
    int total_len;

    total_len = 
	if (size == 0)
	{
		cat_str = malloc(1 * sizeof(char));
		if (!(cat_str))
			return (NULL);
		cat_str[0] = "\0";
		return (cat_str);
	}
	else if (size > 0)
    {
        while(size >= 1)
        {
            ft_strlen(str[size]);
            size--;
        }


        while (++str_idx < size)
		total_length += ft_strlen(strs[str_idx]);
        
    }
}
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}