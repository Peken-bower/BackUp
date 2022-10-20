/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:19:44 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/14 17:06:46 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main ()
{
    char a = 64;
    char b = 127;
    char c = 65;
    ft_putchar(a);
    ft_putchar('\n');
    ft_putchar(b);
    ft_putchar('\n');
    ft_putchar(c);
    ft_putchar('\n');
}