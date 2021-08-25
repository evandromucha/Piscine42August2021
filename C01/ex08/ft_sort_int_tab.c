/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:12:13 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 12:06:06 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swp;
	int	y;

	x = 1;
	while (x < size)
	{
		swp = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swp)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swp;
		x++;
	}
}

int main()
{
    int size = 8;
    int m[] = {8, 4, 5, 7, 2, 6, 3, 1};
	
	ft_sort_int_tab(m, size);
	int	i = 0;
	while(i < size)
	{
		printf("%i ", m[i]);
		i++;
	}
}

