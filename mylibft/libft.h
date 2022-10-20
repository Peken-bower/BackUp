/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:30:35 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/19 02:00:33 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int     ft_toupper(int c);
int     ft_tolower(int c);
size_t  ft_strlen(const char *s);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *s, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strrchr( const char * string, int searchedChar );
char	*ft_strchr(const char *string, int searchedChar);
int     ft_strncmp( const char * first, const char * second, size_t length );
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void    ft_bzero(void *s, size_t n);
void    ft_putchar(unsigned char c);
void    ft_putchar_fd(unsigned char c, int fd);
void    ft_putnbr_fd(int nbr, int fd);
void    ft_putnbr(int nbr);
void    ft_putstr_fd(char const *s , int fd);
void    ft_putstr(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
char    *ft_strcpy(char *des, const char *src);
size_t  ft_strlen(const char *str);
char    *ft_strncpy(char *dst, const char *src, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	    ft_atoi(const char *str);
char	**ft_split(const char *str, char c);
char *ft_strdup(const char *str);


#endif // !1