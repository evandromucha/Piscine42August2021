/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 15:42:58 by emucha            #+#    #+#             */
/*   Updated: 2021/08/20 12:57:18 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *tofind)
{
	int	i;
	int	j;

	i = 0;
	if (*tofind == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == tofind[j])
		{
			if (tofind[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*large = "Computer science is no more about \
		computers than astronomy is about telescopes.";
	char	*small = "about";
	char	*ptr;

	ptr = strstr(large, small);
	printf("Stringão: %s\n\n", large);
	printf("Stringuinha: %s\n\n", small);
	printf("Original: %s \n", ptr);
	printf("Function: %s\n\n", ft_strstr(large, small));
}
