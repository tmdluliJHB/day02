/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:20:57 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 14:47:29 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

void ft_is_negative(int n)
{
    if(n >= 0)
        ft_putchar('P');
    else
        ft_putchar('N');
}
