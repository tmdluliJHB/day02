/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:58:34 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 14:58:47 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    
    return 0;
}

void ft_print_num(char ch1, char ch2, char ch3)
{
    ft_putchar(ch1);
    ft_putchar(ch2);
    ft_putchar(ch3);
    
    if(ch1 != '7' || ch2 != '8' || ch3 != '9')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void)
{
    int n1, n2, n3;
    
    n1 = 0;
    while(n1 <= 9)
    {
        n2 = n1 + 1;
        while(n2 <= 9)
        {
            n3 = n2 + 1;
            while(n3 <= 9)
            {
                ft_print_num(n1 + '0', n2 + '0', n3 + '0');
                ++n3;
            }
            ++n2;
        }
        ++n1;
    }
}
