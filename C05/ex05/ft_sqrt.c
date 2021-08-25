/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:16:03 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 20:57:03 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	raiz;

	raiz = 1;
	if (nb < 0)
		return (0);
	while (raiz * raiz <= nb)
	{
		if (raiz * raiz == nb)
			return (raiz);
		else if (raiz >= 46341)
			return (0);
		raiz++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	int f;
	f = 2500;
	f = f * f;
	printf("\nRaiz Quadrade de %i = %i\n", f, ft_sqrt(f));
}