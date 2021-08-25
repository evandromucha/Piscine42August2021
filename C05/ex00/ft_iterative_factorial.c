/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:04:01 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 17:52:08 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	while (i < nb + 1)
		f = f * i++;
	return (f);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int f[] = {-60, 0, 1, 2, 12, 3, 5, 6, 7, 8, 9, 10, 11} ;
// 	int i = 0;
// 	while (i < 13)
// 	{
// 		printf("Número: %i = %d\n", f[i], ft_iterative_factorial(f[i]));
// 		i++;
// 	}
// }