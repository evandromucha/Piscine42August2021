/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:42:49 by emucha            #+#    #+#             */
/*   Updated: 2021/08/19 17:23:53 by emucha           ###   ########.fr       */
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
	if (argc > 0)
		ft_putstring(argv[0]);
	write (1, "\n", 1);
}
