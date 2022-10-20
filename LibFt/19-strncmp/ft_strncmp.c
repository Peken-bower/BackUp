/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:40:52 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/19 05:49:35 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp( const char * first, const char * second, size_t length )
{
    size_t  i;
    i = 0;
    if (length == 0)
        return (0);
    while ((first[i] && second[i]) && (first[i] == second[i]) && (i < length - 1))
        i++;
    return (((unsigned char)first[i]) - ((unsigned char)second[i]));
}
