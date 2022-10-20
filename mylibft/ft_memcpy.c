/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:43:58 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/15 23:37:12 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *cstdst;
    unsigned char *cstsrc;
     
    if (!dst && !src)
        return NULL;
    cstsrc = (unsigned char *)src;
    cstdst = (unsigned char *)dst; 
    while(n--)
        *(cstdst++) = *(cstsrc++);
    return dst;
}