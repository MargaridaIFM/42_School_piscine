#include "ft_stock_str.h"
//#include "ft_strs_to_tab.c"
#include <unistd.h>
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		 ft_putchar(nb + 48);
}

void ft_show_tab(struct s_stock_str *par)
{
	int idx;

	idx = 0;

	while(par[idx].str)
	{
		ft_putstr(par[idx].str);
		ft_putstr("\n");
		ft_putnbr(par[idx].size);
		ft_putstr("\n");
		ft_putstr(par[idx].copy);
		ft_putstr("\n");
		idx++;
	}
}
int	main (int argc, char **argv)
{
	struct s_stock_str	*structs;
	int idx;

	structs = ft_strs_to_tab(argc, argv);
	ft_show_tab(structs);
	idx = 0;
    while (structs[idx].str != 0)
    {
        free(structs[idx].copy);
        idx++;
    }
	free(structs);

	return(0);
}