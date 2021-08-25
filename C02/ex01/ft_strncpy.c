/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:33:06 by emucha            #+#    #+#             */
/*   Updated: 2021/08/18 14:13:57 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "Isto e facil, so que nao!";
	char	dest[] = "-------------------------";
	int		n;

	n = 13;
	printf("Fonte: %s\n\n", src);
	ft_strncpy(dest, src, n);
	printf("Destino (até %i): %s", n, dest);
	return (0);
}
