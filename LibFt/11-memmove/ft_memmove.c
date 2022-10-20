/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:32:10 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/19 05:50:03 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char 	*cstdst;
	const char *cstsrc;

	cstdst = (char *)dst;
	cstsrc = (char *)src;

	if(cstsrc > cstdst)
		while(len--)
			*(cstdst++) = *(cstsrc++);
	else
		while(len--)
			*(cstdst + len) = *(cstsrc + len);
	return (dst);
}