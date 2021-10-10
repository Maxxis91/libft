/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:07:26 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/09 21:52:38 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*r;

	r = s;
	while (*r)
	{
		if (*r == (char)c)
			return ((char *)r);
		r++;
	}
	if (*r == (char)c)
		return ((char *)r);
	return (NULL);
}
