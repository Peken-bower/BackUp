/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:07:10 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/14 17:07:13 by aelmrabe         ###   ########.fr       */
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
