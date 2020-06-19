/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:06:36 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 12:07:01 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void ft_print_alphabet(void)
{
	char ch = 'a';

    while(ch <= 'z')
    {
        ft_putchar(ch);
        ch++;
    }
}
