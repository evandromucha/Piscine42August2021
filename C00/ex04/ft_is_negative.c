/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:53:25 by emucha            #+#    #+#             */
/*   Updated: 2021/08/16 17:57:36 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;

	if (n < 0)
	{
		x = 'N';
	}
	else
	{
		x = 'P';
	}
	write (1, &x, 1);
}
/*
int	main()
{
	int	n = 2;
	ft_is_negative(n);
	n = -1;
	ft_is_negative(n);
	return(0);
}
*/