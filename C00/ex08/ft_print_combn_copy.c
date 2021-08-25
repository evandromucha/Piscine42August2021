/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn_copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:58:51 by emucha            #+#    #+#             */
/*   Updated: 2021/08/15 11:06:45 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		g_A;
char	g_B[10];

void	ft_rec(int prev, int n)
{
	int	i;

	if (n == g_A)
	{
		write(1, g_B, g_A);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_A + n)
	{
		g_B[n] = '0' + i;
		ft_rec(i, n + 1);
	}
}

void	ft_print_combn(int n)
{

	int		i;
//	char	c;

	i = 0;
	g_A = n;
	while (i < 10 - n)
	{
		g_B[0] = '0' + i;
		ft_rec(i++, 1);
	}
//	while (i <= 9)
//	{
//		c = '0' + i++;
//		write(1, &c, 1);
//	}
}

int main()
{
	ft_print_combn(4);
	return (0);
}
