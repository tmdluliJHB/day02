/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:05:45 by tmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 15:05:59 by tmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_putchar(char c);

int power(int n, int exp)
{
    int result;
    result = n;
    while(exp > 1)
    {
        result *= n;
        --exp;
    }

    return (result)
}

void    ft_printnbr(int nb, int n)
{
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else if (nb >= 10)
    {
        ft_printnbr(nb / 10, n);
        ft_putchar(nb % 10 + '0');
    }
}

void less(int n, int total)
{
    while(n*10 < total)
    {
        ft_putchar('0');
        n *= 10;
    }
}

int is_last_one(int n, int exp)
{
    if(exp == 1)
        return (n == 9);
    else if(exp == 2)
        return (n == 89);
    else if(exp == 3)
        return (n == 789);
    else if(exp == 4)
        return (n == 6789);
    else if(exp == 5)
        return (n == 56789);
    else if(exp == 6)
        return (n == 456789);
    else if(exp == 7)
        return (n == 3456789);
    else if(exp == 8)
        return (n == 23456789);
    else if(exp == 9)
        return (n == 123456789);
    else
	return (1);
}

void ft_print_combn(int n)
{
    int i;
    i  = 1;
    int x;
    int total;
    total  = power(10, n);

    while(i < total)
    {
        int j = i;
        int b = 1;
        while(j >= 10)
        {
            if(j % 10 <= (j/10)%10)
            {
                b = 0;
            }
            j /= 10;
        }
        if(b == 1)
        {
            less(i, total);
            ft_printnbr(i, n);
            if(!is_last_one(i, n)) ft_putchar(' ');
        }
        ++i;
    }
}
