#include <unistd.h>

int	check_errors(char *base)
{
	int	counter;
	int	counter2;

	counter = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[counter])
	{
		if (!(base[counter] > 32 && base[counter] <= 126))
			return (1);
		else if (base[counter] == '+' || base[counter] == '-')
			return (1);
		counter2 = counter + 1;
		while (base[counter2])
		{
			if (base[counter] == base[counter2])
				return (1);
			counter2++;
		}
		counter++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	lnbr;

	lnbr = nbr;
	i = 0;
	if (check_errors(base) == 0)
	{
		if (lnbr < 0)
		{
			write(1, "-", 1);
			lnbr *= -1;
		}
		if (lnbr >= ft_strlen(base))
		{
			ft_putnbr_base(lnbr / ft_strlen(base), base);
		}
		ft_putchar(base[lnbr % ft_strlen(base)]);
	}
}

/*int	main(void)
{
	int nbr = 20;
	char *base = "01";

	ft_putnbr_base(nbr, base);
}*/