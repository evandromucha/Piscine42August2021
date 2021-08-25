/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:28:54 by emucha            #+#    #+#             */
/*   Updated: 2021/08/19 18:37:06 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *chr)
{
	while (*chr)
		write (1, chr++, 1);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstring(argv[--argc]);
		write (1, "\n", 1);
	}
}
