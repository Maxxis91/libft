/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:10:35 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/17 21:50:19 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	m;
	size_t	n;

	if (!s1)
		return (NULL);
	m = 0;
	n = ft_strlen(s1);
	if (set)
	{
		while (ft_strchr(set, *(s1 + m)) && m < ft_strlen(s1))
			m++;
		while (ft_strchr(set, *(s1 + n - 1)) && n > 0)
			n--;
	}
	if (m > n)
		m = n;
	res = (char *)malloc(n - m + 1);
	if (!res)
		return (NULL);
	if (n - m)
		(void)ft_strlcpy(res, s1 + m, n - m + 1);
	else
		*res = '\0';
	return (res);
}
