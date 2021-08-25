/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:53:22 by emucha            #+#    #+#             */
/*   Updated: 2021/08/17 13:36:23 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main ()
{
	int X;
	int Y;
	
	X = 11;
	Y = 99;
	ft_swap(&X, &Y);
	printf("X era 11 e Y era 99, agora X é %i e Y é %i.\n", X, Y);
	return (0);
}
*/
