/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:04:47 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/14 17:05:56 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *ptr, int c, size_t len)
{
	char *p; 
	p = (char *)ptr
	while(len-- > 0)
		p[len] = c;
	return ptr;
}
