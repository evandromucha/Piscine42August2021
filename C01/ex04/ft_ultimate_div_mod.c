/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:17:38 by emucha            #+#    #+#             */
/*   Updated: 2021/08/11 10:51:20 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b1;

	a1 = *a / *b;
	b1 = *a % *b;
	*a = a1;
	*b = b1;
}
/*
int main()
{
	int	a;
	int b;

	a = 11;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
    printf("div:%i - res:%i\n", a, b);
}
*/
