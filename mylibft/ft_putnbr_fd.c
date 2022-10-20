/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 21:20:02 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/08/20 12:05:17 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int nbr, int fd)
{
    if (fd < 0)
    {
        return;
    }
    else if(nbr == -2147483648)
    {
        ft_putstr_fd("-2147483648",fd);
    }
    else if(nbr < 0)
    {
        ft_putchar_fd('-',fd);
        ft_putnbr_fd(-(nbr),fd);
    }
    else if(nbr >= 10) 
    {
        ft_putnbr_fd(nbr / 10,fd);
        ft_putchar_fd(nbr % 10 + '0',fd);
    }
    else
    {
        ft_putchar_fd(nbr + '0',fd);
    }
}
