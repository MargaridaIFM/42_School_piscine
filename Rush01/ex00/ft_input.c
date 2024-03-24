/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgirao-m <rgirao-m@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:36:29 by rgirao-m          #+#    #+#             */
/*   Updated: 2024/02/04 12:09:19 by rgirao-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_error(void);

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter ++;
	}
	return (counter);
}

/*
 * Write a function `int ft_input_has_correct_format(char *str)`.
 * The only parameter of the function is a string.
 * The function will check if the string has the format of single
 * digits separated by spaces.
 * The function returns the number of digits if the string is in
 * this format and 0 if the format is invalid.
 *
 * Allowed functions: none.
 *
 * Examples:
 * ft_input_has_correct_format("1 2 3") should return 3.
 * ft_input_has_correct_format("1  2 3") should return 0.
 *   (two consecutive spaces instead of one.)
 * ft_input_has_correct_format("1 2 34") should return 0.
 *   ('34' isn't a digit.)
 * ft_input_has_correct_format("1 a 2") should return 0.
 *   ('a'a isn't a digit.)
 * ft_input_has_correct_format("9 9 9") should return 3.
 * ft_input_has_correct_format("8") should return 1.
 * ft_input_has_correct_format("10 2 7") should return 0.
 *   (10 isn't a digit.)
 */
int	ft_input_has_correct_format(char *str)
{
	int	i;
	int	counter;
	int	strlen;

	strlen = ft_strlen(str) - 1;
	i = 0;
	counter = 0;
	if (str[strlen] == ' ')
		return (0);
	while (str[i])
	{
		if (i % 2 == 0 && (str[i] >= '0' && str[i] <= '9'))
		{
			counter++;
			i++;
		}
		else if (i % 2 == 1 && (str[i] == ' '))
		{
			i++;
		}
		else
			return (0);
	}
	return (counter);
}

/*
#include <stdio.h>

void	test(char *str, int	expected)
{
	int	result;

	result = ft_input_has_correct_format(str);
	if (result != expected)
		printf("With '%s' expected %d got %d\n", str, expected, result);
}

int	main(void)
{
	test("1 2 3", 3);
	test("1  2 3", 0);
	test("1 2 34", 0);
	test("1 a 2", 0);
	test("9 9 9", 3);
	test("8", 1);
	test("10 2 7", 0);
	test("", 0);
}
*/

/*
 * Write a function `int *ft_get_array(char *str, int size)`.
 * The function accepts a string of digits that are separated by spaces.
 * The function also accepts the number of digits in said string.
 * The function returns a pointer to an array of integers that contains
 * all of the integers from inside the array.
 *
 * Allowed functions: malloc.
 *
 * Examples:
 * ft_get_array("1 2 3", 3) should return a pointer to {1, 2, 3}.
 * ft_get_array("1 2 3 4 5", 5) should return a pointer to {1, 2, 3, 4, 5}.
 * ft_get_array("1 2 3 4 5", 4) should return a pointer to {1, 2, 3, 4}.
 */

int	*ft_get_array(char *str, int size)
{
	int	i;
	int	j;
	int	*ptr;

	i = 0;
	j = 0;
	ptr = malloc((size + 1) * sizeof(int));
	while (j != size)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			ptr[j] = str[i] - 48;
			i++;
			j++;
		}
		else
			i++;
	}
	ptr[j] = 0;
	return (ptr);
}

/*
void	ft_print_digit_array(int *array, int size);
int	main(void)
{
	ft_print_digit_array(ft_get_array("1 2 3 4", 4), 5);
}
*/

/*
 * Write a function
 * `int ft_input_has_correct_size(int input_length, int board_size)`.
 * The fiirst parameter the function accepts is the length of the input
 * (how many digits we receive that represent views).
 * The second parameter is the size that the board is supposed to have.
 * The function returns 1 if the length of the input is correct for the expected
 * board size and 0 otherwise.
 *
 * Allowed functions: none.
 *
 * Examples:
 * ft_input_has_correct_size(16, 4) should return 1.
 * ft_input_has_correct_size(17, 4) should return 0.
 * ft_input_has_correct_size(20, 4) should return 0.
 * ft_input_has_correct_size(20, 5) should return 1.
 */

int	ft_input_has_correct_size(int input_length, int board_size)
{
	if ((input_length / 4 == board_size) && input_length % 4 == 0)
		return (1);
	else
		return (0);
}

/*
 * Write a function `int ft_parse_input(int **input, char *str)`.
 * The function accepts a parameter `int **input` which is a pointer
 * to the pointer where we'll store the parsed input.
 * The input string is in the parameter `str`, which has to be validated
 * first.
 * The function returns the length of the array created and stores the
 * array created in `*input`.
 * (See C07, ex02, for example).
 * If the input is invalid, it prints an error message, stores NULL in
 * `*input`, and returns -1.
 *
 * Allowed functions: malloc, ft_input_has_correct_format, ft_get_array,
 *   ft_error.
 *
 * Examples:
 * ft_parse_input(input, "1 2 3") parses the array {1, 2, 3} and returns 3.
 * ft_parse_input(input, "a b c") errors and returns -1.
 * ft_parse_input(input, "4 3 2 1 1 2 3 4") parses the array {4, 3, 2, 1,
 *   1, 2, 3, 4} and returns 8.
 * ft_parse_input(input, "10 3") errors and returns -1.
 */
int	ft_parse_input(int **input, char *str)
{
	int	x;
	int	*y;

	x = ft_input_has_correct_format(str);
	if ((x != 0) && ((x % 4) == 0))
	{
		y = ft_get_array(str, x);
		*input = y;
		return (x);
	}
	else
	{
		ft_error();
		input = NULL;
		return (-1);
	}
}

/*
#include <stdio.h>
void    ft_print_digit_array(int *array, int size);
int	main(void)
{
	int *views;
	int	length;

	views = NULL;
	length = ft_parse_input(&views, "1 2 3 4 5 6 7 8");
	printf("length = %d\n", length);
	ft_print_digit_array(views, length);
}
*/
