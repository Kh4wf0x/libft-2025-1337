/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:27:35 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/16 14:27:37 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strrchr(const char *s, int c)
{
	char *str;
	unsigned char ch;
	int lenstr;

	str = (char *)s;
	ch = c;
	lenstr = ft_strlen(s);
	if (str[lenstr] == ch)
	{
		return(&str[lenstr]);
	}
	while (lenstr >= 0)
	{
		if (str[lenstr] == ch)
		{
			return (&str[lenstr]);
		}
		lenstr--;
	}
	return (NULL);
}