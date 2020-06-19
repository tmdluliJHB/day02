/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:08:16 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 12:09:09 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_reverse_alphabet(void)
{
    char ch = 'z';

    while(ch >= 'a')
    {
        ft_putchar(ch);
        ch--;
    }
		
}
