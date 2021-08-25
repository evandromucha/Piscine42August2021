/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:39:32 by emucha            #+#    #+#             */
/*   Updated: 2021/08/18 18:00:48 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "Isto e facil, so que nao!";
// 	char	dest[] = "--------";
// 	int		c;

// 	c = 2;
// 	printf("Fonte: %s\n\n", src);
// 	ft_strlcpy(dest, src, c);
// 	// strlcpy(dest, src, c));
// 	printf("Destino (até %i): %s", c, dest);
// 	return (0);
// }
