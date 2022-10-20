/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:42:06 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/17 23:45:57 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((ft_isdigit(c) == 1)||(ft_isalpha(c) == 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}