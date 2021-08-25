/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:12:13 by emucha            #+#    #+#             */
/*   Updated: 2021/08/11 11:07:26 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	pos;

	a = 0;
	while (a < size)
	{
		pos = tab[size - 1];
		tab[size - 1] = tab[a];
		tab[a] = pos;
		a++;
		size--;
	}
}
/*
int main()
{
    int size = 8;
    int m[] = {1, 3, 5, 7, 9, 11, 13, 15};
	
	ft_rev_int_tab(m, size);
	
	int	i = 0;
	while(i < size)
	{
		printf("%i ", m[i]);
		i++;
	}
}
*/
