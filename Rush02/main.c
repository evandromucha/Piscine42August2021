#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <string.h>

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

int		ft_is_spaced(char c)
{
	if ((c == ':') || (c == 32) || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	*ft_start(char *dict, char *indict)
{
	int		i;
	char 	dados;

	i = 0;
	if (!(indict = (char *)malloc(2000)))
		return 0;
	if ((dados = open(dict, O_RDONLY)) == -1)
	{
		write(1, "Dict Error", 11);
		return 0;
	}
	while ((read(dados, &indict[i], 1)))
		i++;
	if (close(dados) == -1)
	{
		write(1, "Close Error", 12);
		return 0;
	}
//	printf("Posiçao 3 start: %c\n", indict[4]);
	i = 0;
	while (i < 14)
	{
			printf("%c", indict[i]);
			i++;		
	}

	return (0);
}

int	main(int argc, char *argv[])
{
	char	*dict;
	int		num;
	char	*indict;
	int 	i;


	num = 0;
	indict = "";
	if (argc > 3)
	{	
		write (1, "Error\n", 6);
		return (0);
	}
	else if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		i = 1;
		dict = "numbers.dict";
	}	
	else if (argc == 3)
	{
		num = ft_atoi(argv[2]);
		i = 2;
		dict = argv[1];
	}
	else
		return (0);


	ft_start(dict, indict);

	// i = 0;
	// while (i < 13)
	// {
	// 		printf("%c", indict[i]);
	// 		i++;		
	// }

	// printf("Posição na MAIN %c\n", indict[4]);

	// free(indict);

}
