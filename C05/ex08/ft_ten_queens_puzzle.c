/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:12:47 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 14:56:59 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

#define NXN 10

bool	emrisco(int board[][NXN], int at_x, int at_y)
{
	int	x;
	int	y;
	int	offsets[2];

	offsets[0] = at_y - at_x;
	offsets[1] = at_y + at_x;
	x = 0;
	while (x < NXN)
	{
		y = 0;
		while (y < NXN)
		{
			if (x == at_x || y == at_y
				|| y == x + offsets[0] || y == -x + offsets[1])
				if (board[y][x])
					return (true);
			y++;
		}
		x++;
	}
	return (false);
}

void	ft_limpa(int board[][NXN], int x)
{
	int	index;

	index = 0;
	while (index < NXN)
	{
		board[index++][x] = false;
	}
}

void	position(int board[][NXN])
{
	int	y;
	int	column;

	y = 0;
	while (y < NXN)
	{
		column = 0;
		while (column < NXN)
		{
			if (board[y][column])
			{
				write(1, &"0123456789"[column], 1);
				break ;
			}
			column++;
		}
		y++;
	}
	write(1, "\n", 1);
}

bool	r_find(int board[][NXN], int x, int *soluce)
{
	int	y;

	if (x >= NXN)
		return (true);
	y = 0;
	while (y < NXN)
	{
		if (!emrisco(board, x, y))
		{
			board[y][x] = true;
			if (r_find(board, x + 1, soluce))
			{
				*soluce += 1;
				position(board);
			}
			board[y][x] = false;
		}
		y++;
	}
	return (false);
}

int	ft_ten_queens_puzzle(void)
{
	int	soluce;
	int	board[NXN][NXN];
	int	column;

	soluce = 0;
	column = 0;
	while (column++ < NXN)
		ft_limpa(board, column - 1);
	r_find(board, 0, &soluce);
	return (soluce);
}
// int main()
// {
// 	ft_ten_queens_puzzle();
// }