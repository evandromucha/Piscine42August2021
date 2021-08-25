/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:11:02 by emucha            #+#    #+#             */
/*   Updated: 2021/08/18 11:01:36 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_base_valida(char *base)
{
	int	count;
	int	index;

	count = 0;
	while (base[count])
	{
		if ((base[count] >= 9 && base[count] <= 13) || base[count] == 32 \
			|| base[count] == 43 || base[count] == 45)
			return (0);
		index = count - 1;
		while (index >= 0)
		{
			if (base[index] == base[count])
				return (0);
			index--;
		}
		count++;
	}
	if (count <= 1)
		return (0);
	return (count);
}

void	ft_putnbr(int nbr, char *base, int n)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / n, base, n);
		write(1, &(base[-(nbr % n)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr, base, n);
		return ;
	}
	if (nbr > n - 1)
		ft_putnbr(nbr / n, base, n);
	write(1, &(base[nbr % n]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;

	n = ft_base_valida(base);
	if (n > 0)
		ft_putnbr(nbr, base, n);
}

int	main(void)
{
	int		nbr;
	char	*base;

	nbr = -255;
	base = "1";
	ft_putnbr_base(nbr, base);
	return (0);
}