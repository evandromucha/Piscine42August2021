/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:43:37 by emucha            #+#    #+#             */
/*   Updated: 2021/08/18 15:42:44 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_printchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= INT_MIN && nb <= INT_MAX)
	{
		if (nb == INT_MIN)
		{
			ft_printchar('-');
			ft_printchar('2');
			ft_putnbr(147483648);
		}
		else if (nb < 0)
		{
			ft_printchar('-');
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_printchar(nb + '0');
		}
	}
}

// int	main()
// {
// 	ft_putnbr(42);
// 	return(0);
// }