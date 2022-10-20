/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:37:23 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/20 02:02:31 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char    *ft_strrchr( const char * string, int searchedChar )
{
    size_t i;

    i = ft_strlen(string);
    if((char)searchedChar == '\0')
        return ((char *) string + i);
    while(string[--i])
    {
        if (string[i] == (char)searchedChar)
            return ((char *)(string + i));
        if (i == 0)
            break;
    }
    if(!(searchedChar || string[i]))
        return ((char *)string + i);
    return (NULL);
}
