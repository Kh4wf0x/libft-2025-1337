/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:55:55 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/13 15:55:56 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

//دوال التعامل مع السلاسل النصية (Strings)
size_t ft_strlen(const char *str);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);


//دوال التعامل مع الذاكرة (Memory functions)
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void ft_bzero(void *s, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);




//دوال التحويل (Conversion)



//دوال التعامل مع الحروف (Character handling)
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_tolower(int c);


//دوال التعامل مع الذاكرة (Memory functions)


//bonus
#endif