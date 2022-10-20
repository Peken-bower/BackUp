/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:15:15 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/14 17:07:20 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcpy(char *des, const char *src)
{
    int i;
    i = 0;    
    while (src[i])
    {
        des[i] = src[i];
        i++;
        des[i] = '\0';
    }
    return des;
}