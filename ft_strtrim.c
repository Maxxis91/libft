/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:10:35 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/14 19:09:02 by gmelissi         ###   ########.fr       */
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
		n = 0;
		if (set)
		{
			while (ft_strchr(set, *(s1 + m)) && m <= ft_strlen(s1))
			{
					m++;
			}
			while (ft_strchr(set, *(s1 + ft_strlen(s1) - n - 1)) && n < ft_strlen(s1))
			{
					n++;
			}
		}
		if (m + n > ft_strlen(s1))
		{
			res = (char *)malloc(1);
			if (!res)
				return (NULL);
			*res = '\0';
		}
		else
		{
			res = (char *)malloc(ft_strlen(s1) - m - n + 1);
			if (!res)
				return (NULL);
			(void)ft_strlcpy(res, s1 + m, ft_strlen(s1) - m - n + 1);
		}
		return (res);
	}
	return (NULL);
}
