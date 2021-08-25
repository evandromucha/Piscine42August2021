/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:54:59 by emucha            #+#    #+#             */
/*   Updated: 2021/08/24 14:08:23 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlength(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	lenght;
	char	*buffer;

	lenght = ft_strlength(src);
	buffer = (char *) malloc (lenght * sizeof(char) + 1);
	if (buffer == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		buffer[i] = src[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

// #include <stdio.h> 
// #include <string.h>
// int main (void)
// {
// 	char *src;
// 	src = "Evandro Mucha";
// 	printf("Funçao criada   para %s - Resultado: %s\n", src, ft_strdup(src));
// 	printf("Função original para %s - Resultado: %s\n", src, strdup(src));
// 	src = "";
// 	printf("Funçao criada   para %s - Resultado: %s\n", src, ft_strdup(src));
// 	printf("Função original para %s - Resultado: %s\n", src, strdup(src));	
// 	src = "O séc XX foi o séc da equação; o séc XXI é o séc do algoritmo.";
//  printf("Criada   %s - Resultado: %s\n", src, ft_strdup(src));
//  printf("Original %s - Resultado: %s\n", src, strdup(src));	ft_strdup(src);
// }