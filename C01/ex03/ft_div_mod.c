/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:48:09 by emucha            #+#    #+#             */
/*   Updated: 2021/08/11 10:50:17 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
    int     a;
    int     b;
    int     div;
    int     mod;
    
    a = 11;
    b = 2;
    ft_div_mod(a, b, &div, &mod);
    printf("a:%i - b:%i - div:%i - res:%i\n", a, b, div, mod);
}
*/
