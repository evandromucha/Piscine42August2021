/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:17:02 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 16:17:03 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_char(char *tab, int size)
{
	int		x;
	int		y;
	char	swp;	

	x = 1;
	while (x < size)
	{
		swp = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swp)
		{
			tab[y + 1] = tab[y];
			y--;
		}
		tab[y + 1] = swp;
		x++;
	}
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_putstring(char *chr)
{
	while (*chr)
		write (1, chr++, 1);
}

int	main(int argc, char *argv[])
{
	int	index;

	ft_sort_char(*argv, argc);
	index = 0;
	while (index < argc && argc > 0)
	{
		ft_putstring(argv[index]);
		write (1, "\n", 1);
		index++;
	}
}
