#include <stdio.h>
#include <stdlib.h>

void    multiplication_table(char *str)
{
    int i = 0;
    int value = atoi(str);
    int mult = 1;
    int res = 0;

    while(i != 10)
    {
        res = value * mult;
        printf("%d * %d = %d\n", value, mult, res);
        i++;
        mult++;
    }
}

int     main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("\n");
        return(0);
    }

    multiplication_table(argv[1]);
}