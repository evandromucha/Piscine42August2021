/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:20:06 by emucha            #+#    #+#             */
/*   Updated: 2021/08/17 19:44:53 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned int	n;
	char			str1[] = "0123456789";
	char			str2[] = "01234";

	n = 5;
	printf("\nMinha função  : %i\n", ft_strncmp(str1, str2, n));
	printf("Função strncmp: %i\n", strncmp(str1, str2, n));
	return (0);
}
*/