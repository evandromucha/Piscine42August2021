/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:30:17 by emucha            #+#    #+#             */
/*   Updated: 2021/08/19 18:02:44 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
			(str[i] >= 'A' && str[i] <= 'Z') || \
			(str[i] >= '0' && str[i] <= '9'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "oI, TUDO bem? 42PPPlavras QUARENTA-e-duas; cinquenta+e+um";

// 	printf("\n%s\n", ft_strcapitalize(s));
// 	return (0);
// }
