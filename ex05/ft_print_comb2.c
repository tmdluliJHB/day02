/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 12:25:17 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 12:25:32 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char c);

void ft_print_digits(int num)
{
    if(num < 10)
    {
        ft_putchar('0');
        ft_putchar(num + '0');
    }
    else
    {
        ft_putchar(num / 10 + '0');
        ft_putchar(num % 10 + '0');
    }
}

void f_print_num(int ch1, int ch2)
{
    ft_print_digits(ch1);
    ft_putchar(' ');
    ft_print_digits(ch2);
    if(ch1 != 98 || ch2 != 99)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb2(void)
{
    int num1;
    int num2;
    
    num1 = 0;
    while(num1 <= 99)
    {
        num2 = num1;
        while(num2 <= 99)
        {
            if(num1 != num2)
                f_print_num(num1, num2);
        }
        ++num2;
    }
}
