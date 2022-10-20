/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:52:01 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/19 05:49:51 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}


// size_t	ft_strlcpy(char *dst, const char *src, size_t size)
// {
//     size_t len;  
//     len = ft_strlen(src);
    
//     if(size == 0)
//         return (len);
//     while(*src && --size)
//         *(dst++) = *(src++);
//     *dst = '\0';
//     return (len);
// }

// size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
//     size_t    lsrc;

//     lsrc = ft_strlen(src);
//     if (dstsize == 0)
//         return (lsrc);
//     while (*src && --dstsize)
//         *(dst++) = *(src++);
//     *dst = '\0';
//     return (lsrc);
// }