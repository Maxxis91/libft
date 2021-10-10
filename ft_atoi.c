/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:01:17 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/10 20:04:28 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c > 8 && c < 14) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *src)
{
	long		res;
	int			sign;
	const char	*s;

	s = src;
	res = 0;
	sign = 1;
	while (*s && ft_isspace(*s))
		s++;
	if (*s && (*s == 43 || *s == 45))
	{
		if (*s == 45)
			sign *= -1;
		s++;
	}
	while (*s && ft_isdigit(*s))
	{
		res = res * 10 + *s - 48;
		s++;
	}
	res *= sign;
	return ((int)res);
}
