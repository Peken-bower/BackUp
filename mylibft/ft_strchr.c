/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:24:39 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/20 02:00:56 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


char		*ft_strchr(const char *string, int searchedChar)
{
	size_t	i;

	i = -1;
	while (string[++i])
		if (string[i] == (char)searchedChar)
			return ((char *)string + i);
	if (!searchedChar && string[i] == '\0')
		return ((char *)string + i);
	return (NULL);
}
