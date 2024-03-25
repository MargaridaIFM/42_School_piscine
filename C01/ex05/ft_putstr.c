/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:37:19 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/28 12:39:47 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*int main(void)
{
	//char	*string;
	char	frase[] = "Hello World";
	
	//string = &frase;
	//frase = "Hello World";
	ft_putstr(frase);
	return (0);
}*/
