/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:16:05 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 14:21:21 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);

	return 0;
}

void ft_putnbr(int num)
{
    if(num < 10 && num >= 0)
    {
       ft_putchar(num + '0');
    }

    else
        if(num >= 10)
        {
            ft_putnbr(num / 10);
            ft_putchar(num % 10 + '0');
        
            if(num < 0)
               ft_putchar('-');
        }
    else
    {
        ft_putchar('-');
        ft_putnbr(num * -1);
    }
}
