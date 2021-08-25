/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emucha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:10:11 by emucha            #+#    #+#             */
/*   Updated: 2021/08/17 14:01:22 by emucha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	s;

	s = 0;
	while (str[s])
	{
		write (1, &str[s], 1);
		s++;
	}
}

int main()
{
    char str[] = "Não era mais fácil um printf?";
    ft_putstr(str);
    return(0);
}

