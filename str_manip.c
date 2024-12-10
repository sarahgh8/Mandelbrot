#include "fractol.h"

int ft_strcmp(char *arg, char *str)
{
    int i = 0;
    while(arg[i] && str[i])
    {
        if(arg[i] != str[i])
            return 0;
        i++;
    }
    return 1;
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}