/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:36:41 by emucha            #+#    #+#             */
/*   Updated: 2021/08/24 18:04:34 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	lenght;
	int	*buffer;	

	if (min >= max)
		return (NULL);
	lenght = max - min;
	buffer = (int *) malloc (lenght * sizeof(int) + 1);
	if (buffer == NULL)
		return (0);
	i = 0;
	max--;
	while (max >= min)
	{
		buffer[i] = max;
		max--;
		i++;
	}
	return (buffer);
}

#include <stdio.h> 
#include <string.h>
int	main(void)
{
	int	max;
	int	min;
	int	i;
	min = 0;
	max = 11;
	i = 0;
	while (i < (max - min))
	{
		printf("%i ", (ft_range(min, max)[i]));
		i++;
	}
}
