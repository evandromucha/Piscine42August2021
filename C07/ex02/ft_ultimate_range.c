/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:40:20 by emucha            #+#    #+#             */
/*   Updated: 2021/08/24 18:04:08 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	lenght;
	int	*buffer;	

	if (min >= max)
	{
		*range = 0;
//		return NULL;
	}
	lenght = max - min - 1;
	buffer = (int *) malloc (lenght * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i <= lenght)
	{
		buffer[i] = min + i;
		i++;
	}
	return (lenght + 1);
}

#include <stdio.h> 
#include <string.h>
int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	//fflush(stdout);
	//debug_dump_array(range, bound + 2);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min - 1;
	if ((buffer = malloc(bound * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index <= bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound + 1);
}

// void	debug_dump_array(int numbers[], int size)
// {
// 	int index;

// 	printf("[ ");
// 	index = 0;
// 	while (index < size)
// 	{
// 		printf("%d", numbers[index]);
// 		if (index != size - 1)
// 		{
// 			printf(", ");
// 		}
// 		index++;
// 	}
// 	printf(" ]");
// }

int		main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 100;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
///	fflush(stdout);
//	debug_dump_array(range, bound + 2);
}