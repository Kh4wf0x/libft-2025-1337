/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:47:00 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/16 14:47:02 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
// int strcmp(const char *s1, const char *s2)
// {

// }
int main()
{
	char str1[] = "simo";
	char str2[] = "santoos";
	int i = strcmp(str1,str2);
	printf ("%d", i);
}
