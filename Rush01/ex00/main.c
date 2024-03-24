/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:46:27 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:23:15 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_error(void);
int		ft_parse_input(int **input, char *str);
void	solve(int *views, int size);

/*
 * Write a function `main` that behaves as explained in the subject and
 * uses the function `solve` to solve the problem.
 * `main` first has to do validation of the arguments.
 * Then, it will parse the input with `ft_parse_input`.
 * Then, it will use the function `solve` to solve the puzzle.
 *
 * Allowed functions: Any ft_* function, malloc, free.
 */
int	main(int argc, char *argv[])
{
	int	length;
	int	*views;

	if (argc != 2)
	{
		ft_error();
		return (0);
	}
	views = NULL;
	length = ft_parse_input(&views, argv[1]);
	if (length < 0)
		return (0);
	solve(views, length / 4);
	free(views);
}
