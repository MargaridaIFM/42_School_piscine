#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	counter;

	counter = 0;
	while (src[counter])
	{
		counter++;
	}
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		idx;
	char	*dest;
	int		size_len;

	idx = 0;
	size_len = ft_strlen(src) + 1;
	dest = malloc(size_len * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					idx;
	struct s_stock_str	*matriz;

	matriz = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!matriz)
		return (NULL);
	idx = 0;
	while (idx < ac)
	{
		matriz[idx].size = ft_strlen(av[idx]);
		matriz[idx].str = av[idx];
		matriz[idx].copy = ft_strdup(av[idx]);
        idx++;
	}
	matriz[idx].str = 0;
	matriz[idx].copy = 0;
	return (matriz);
}

/*int	main(int argc, char *argv[])
{
	int					idx;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
    idx = 0;
    while (idx < argc)    
    {
        printf("%d\n", idx);
		printf("\t| original : $%s$ @ %p\n", structs[idx].str, structs[idx].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[idx].copy, structs[idx].copy);
		printf("\t|     size : %d\n", structs[idx].size);
        idx++;
    }
    free(structs);
}*/ 
