/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:50:21 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/13 19:37:13 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (s)
	{
		res = (char *)malloc(len + 1);
		if (!res)
			return (NULL);
		i = 0;
		if (start <= ft_strlen(s))
		{
			s += start;
			while (len > 0)
			{
				*(res + i) = *s;
				s++;
				i++;
				len--;
			}
		}
		*(res + i) = '\0';
		return (res);
	}
	return (NULL);
}
