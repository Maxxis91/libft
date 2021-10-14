/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:10:35 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/14 19:17:47 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	m;
	size_t	n;

	if (s1)
	{
		m = 0;
		n = ft_strlen(s1);
		if (set)
		{
			while (ft_strchr(set, *(s1 + m)) && m <= ft_strlen(s1))
				m++;
			while (ft_strchr(set, *(s1 + n - 1)) && n > 0)
				n--;
		}
		if (m > n)
		{
			res = (char *)malloc(1);
			if (!res)
				return (NULL);
			*res = '\0';
		}
		else
		{
			res = (char *)malloc(n - m + 1);
			if (!res)
				return (NULL);
			(void)ft_strlcpy(res, s1 + m, n - m + 1);
		}
		return (res);
	}
	return (NULL);
}
