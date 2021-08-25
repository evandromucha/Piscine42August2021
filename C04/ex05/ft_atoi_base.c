/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:14:10 by emucha            #+#    #+#             */
/*   Updated: 2021/08/18 17:46:56 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	sinal;

	sinal = 1;
	i = 0;
	r = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sinal *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10;
		r = r + (int)str[i] - '0';
		++i;
	}
	return (r * sinal);
}

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

int	ft_atoi_base(char *str, char *base)
{
	int	n;

	n = ft_base_valida(base);
	if (n > 0)
		ft_putnbr(ft_atoi(str), base, n);
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*base;

// 	str = "   ---+--+123456dfdf-+uu123";
// 	base = "01";
// 	ft_atoi_base(str, base);
// 	return (0);
// }