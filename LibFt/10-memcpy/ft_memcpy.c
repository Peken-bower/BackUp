/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:05:41 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/19 05:42:27 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *cstdst;
    char *cstsrc; 

    cstsrc = (char *)src;
    cstdst = (char *)dst; 
    while(n--)
        *(cstdst++) = *(cstsrc++);
    return dst;
}