/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:15:46 by mfrancis          #+#    #+#             */
/*   Updated: 2024/01/28 18:32:05 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	begin;
	int	end;
	int	temp;

	begin = 0;
	end = size -1;
	while (begin <= end)
	{
		temp = tab[begin];
		tab[begin] = tab[end];
		tab[end] = temp;
		begin++;
		end--;
	}
}
