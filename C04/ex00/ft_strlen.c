#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main(void)
{
    char    str[] = "Evandro";

    printf("nº de caracteres: %i\n", ft_strlen(str));
    return (0);
}