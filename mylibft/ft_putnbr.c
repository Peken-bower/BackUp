/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:02:23 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/08/20 14:46:14 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putstr("-2147483648");
    }
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
        ft_putchar(nbr % 10 + '0');
    }
    else 
    {
        ft_putchar(nbr + '0');
    }
}