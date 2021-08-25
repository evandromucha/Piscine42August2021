#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>

void	ft_putstring(char *chr)
{
	while (*chr)
		write (1, chr++, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	sinal;

	sinal = 1;
	i = 0;
	r = 0;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sinal *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10;
		r = r + (int)str[i] - '0';
		++i;
	}
	return (r * sinal);
}

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	j;

	i = 0;
	if (*tofind == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == tofind[j])
		{
			if (tofind[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_start(char dict, int fd, char *indict)
{
	char	*end;
	int		i;

	i = 0;
	if (!(indict = (char *)malloc(2000)))
		return ;
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
	{
		write(1, "Dict Error", 11);
		return ;
	}
	while ((read(fd, &indict[i], 1)))
		i++;
	if (close(fd) == -1)
	{
		write(1, "Close Error", 12);
		return ;
	}
	if (((end = ft_strstr(indict, &dict))) == 0)
		return ;
//	ft_print(end);
}

int	main(int argc, char *argv[])
{
	int		num;
	char	*dict;
	int		fd;
	char	*indict;

	fd = 0;
	indict = 0;
	if (argc > 3)
	{	
		write (1, "Error\n", 6);
		return (0);
	}
	else if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		dict = "numbers.dict";
	}	
	else if (argc == 3)
	{
		num = ft_atoi(argv[2]);
		dict = argv[1];
	}
	else
		return (0);
	if (num < 0)
	{	
		write (1, "Error\n", 6);
		return (0);
	}
	printf("\nNum %i\n", num); //debug
	printf("Dict: %s\n", dict); //debug
	
	ft_start(*dict, fd, indict);
}