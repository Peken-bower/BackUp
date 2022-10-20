/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:40:29 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/19 05:47:31 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strdup(const char *src)
{
    size_t i;
    char *dst;
    i = 0;
    
    dst = (char *)malloc((char * ft_strlen(src))+1);
    if(dst == NULL)
        return NULL;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}