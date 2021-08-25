/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:23:18 by emucha            #+#    #+#             */
/*   Updated: 2021/08/09 18:33:16 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char numb)
{
	write(1, &numb, 1);
}

void	ft_show(int numb)
{
	int	x;
	int	y;

	if (numb > 9)
	{
		x = numb / 10;
		y = numb % 10;
		ft_printchar(x + '0');
		ft_printchar(y + '0');
	}
	else
	{
		ft_printchar('0');
		ft_printchar(numb + 48);
	}
}

void	ft_result(int x, int y)
{
	ft_show(x);
	ft_printchar(' ');
	ft_show(y);
	if (x < 98 || y < 99)
	{
		ft_printchar(',');
		ft_printchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_result(x, y);
			y++;
		}
		x++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return (0);
}
*/
