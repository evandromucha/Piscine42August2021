/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:42:31 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 14:56:40 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
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
// 		printf("N: %i, P: %i = %d\n", n, p, ft_recursive_power(n, p));
// 		n++;
// 	}
// }