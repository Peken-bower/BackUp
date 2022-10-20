/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:32:10 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/16 21:29:23 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)

{
	char 	*cstdst;
	const char *cstsrc;

	cstdst = (char *)dst;
	cstsrc = (char *)src;
	
	if ((!src)&&(!dst))
		return NULL;
	if(cstsrc > cstdst)
		while(len--)
			*(cstdst++) = *(cstsrc++);
	else
		while(len--)
			*(cstdst + len) = *(cstsrc + len);
	return (dst);
}
/*
int main ()
{
	char d[9];
	char s[9] = "Abdellah";
	printf("%s",ft_memmove(s,d,8));
	//printf("%s",memmove(s,d,8));
}
*/

