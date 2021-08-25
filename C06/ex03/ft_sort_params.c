#include <stdbool.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_str_sort(char **arr, int size, int offset)
{
	int		index;
	bool	swapped;

	index = offset;
	while (true)
	{
		index = offset;
		swapped = false;
		while (index < size)
		{
			if (ft_strcmp(arr[index], arr[index + 1]) > 0)
			{
				ft_swap(&arr[index], &arr[index + 1]);
				swapped = true;
			}
			index++;
		}
		if (!swapped)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int	index;

	if (argc > 2)
		ft_str_sort(argv, argc - 1, 1);
	index = 0;
	while (++index < argc)
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
	}
}
