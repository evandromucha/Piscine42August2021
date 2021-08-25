/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:33:07 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 14:56:19 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	index = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (index < power)
	{
		result = result * nb;
		index++;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	int	p;
// 	p = 3;
// 	n = -5;
// 	while (n < 6)
// 	{
// 		printf("N: %i, P: %i = \%d\n",\ n, p, ft_iterative_power(n, p));
// 		n++;
// 	}
// }