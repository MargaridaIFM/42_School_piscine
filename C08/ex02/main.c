#include "ft_abs.h"
#include <stdio.h>

/*int main(void)
{
    int idx;

    idx = -5;
    while (idx < 5)
    {
        printf("macros::abs(%d) = %d\n", idx, ABS(idx));
		idx++;
    }
}*/
int main(void)
{
    int nr1;
    int nr2;

    nr1 = 5;
    nr2 = -8;

    printf("O valor absuluto do %d e %d\n", nr1, ABS(nr1));
    printf("O valor absuluto do %d e %d\n", nr2, ABS(nr2));
}
