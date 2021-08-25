/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <evandromucha@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:10:11 by emucha            #+#    #+#             */
/*   Updated: 2021/08/18 15:43:35 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		write (1, &str[s], 1);
		s++;
	}
}

// int main()
// {
//     char str[] = "Não era mais fácil um printf?";
//     ft_putstr(str);
//     return(0);
// }