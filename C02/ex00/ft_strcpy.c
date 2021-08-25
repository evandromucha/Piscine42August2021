/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:39:28 by emucha            #+#    #+#             */
/*   Updated: 2021/08/13 12:49:08 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "FUNCIONA";
	char	dest[] = "-X-X-X-X-";
	printf("Antes:\nSource: %s\nDestination: %s\n\n", src, dest);
//	strcpy (dest, src); //ORIGINAL
	ft_strcpy (dest, src); //FUNÇAO
	printf("Depois:\nSource: %s\nDestination: %s\n", src, dest);
	return(0);
}
*/