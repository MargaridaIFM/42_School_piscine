/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 07:55:38 by mfrancis          #+#    #+#             */
/*   Updated: 2024/02/07 10:53:28 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_print_params(char *str)
{
	int	k;

	k = 0;
	while (str[k] != '\0')
	{
		write(1, &str[k], 1);
		k++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = i;
			while (ft_strcmp(argv[j], argv[j - 1]) < 0 && j > 1)
			{
				ft_swap(&argv[j], &argv[j - 1]);
				j--;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_print_params(argv[i]);
			i++;
		}
	}
	return (0);
}
