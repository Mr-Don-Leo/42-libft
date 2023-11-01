#include "libft.h"

int	ft_atoi(const char *str)
{
    int index;
    int result;
    int negative;

    index = 0;
    result = 0;
    negative = 1;
    while(str[index] == ' ' || str[index] >= 9 && str[index] <= 13)
        index++;
    while(str[index] == '-' || str[index] == '+')
    {
        if(str[index] == '-')
        {
            negative *= -1;
        }
        index++;
    }
    while(str[index] >= '0' && str[index] <= '9')
    {
        result = (str[index] - '0') + (result * 10);
        index++;
    }
    return (result * negative);
}