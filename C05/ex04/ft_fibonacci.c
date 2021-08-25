/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:50:41 by emucha            #+#    #+#             */
/*   Updated: 2021/08/23 14:57:07 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
// #include <stdio.h>
// int	main(void)
// {
// 	int f;
// 	f = 0;
// 	while (f < 15)
// 	{
// 		printf("Número: %i = %i\n", f, ft_fibonacci(f));
// 		f++;
// 	}
// }