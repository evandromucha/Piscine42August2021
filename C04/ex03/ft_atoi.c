/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:45:00 by emucha            #+#    #+#             */
/*   Updated: 2021/08/24 14:15:26 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

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

// int	main(void)
// {
// 	char	*str;

// 	str = "2147483649";
// //	printf("Resultado: %i", ft_atoi(str));
// 	printf("%i", atoi(str));
// 	return (0);
// }
