/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:31:21 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 14:57:45 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return (ft_recursive_factorial(nb - 1) * nb);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int f;
// 	f = -2;
// 	while (f < 6)
// 	{
// 		printf("Número: %i = %d\n", f, ft_recursive_factorial(f));
// 		f++;
// 	}
// }