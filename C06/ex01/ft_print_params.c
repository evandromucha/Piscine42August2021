/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:21:57 by emucha            #+#    #+#             */
/*   Updated: 2021/08/19 18:36:10 by emucha           ###   ########.fr       */
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
	int	index;

	index = 1;
	while (index < argc && argc > 1)
	{
		ft_putstring(argv[index]);
		write (1, "\n", 1);
		index++;
	}
}
