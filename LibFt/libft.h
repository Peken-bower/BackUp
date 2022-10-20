/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelmrabe <aelmrabe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:30:35 by aelmrabe          #+#    #+#             */
/*   Updated: 2022/10/14 16:48:50 by aelmrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int     ft_toupper(int c);
int     ft_tolower(int c);
size_t  ft_strlen(const char *s);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    ft_putchar(char c);
//void    ft_putnbr_fd(int nbr, int fd);
//void    ft_putstr_fd(char const *s , int fd);
//void    ft_putstr(char const *s);
char    *ft_strcpy(char *des, const char *src);
size_t ft_strlen(const char *str);
//char *strncpy(char *dst, const char *src, size_t n);





#endif // !1