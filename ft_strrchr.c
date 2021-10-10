/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:08:22 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/09 21:52:58 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = s;
	while (*r)
		r++;
	while (r >= s)
	{
		if (*r == (char)c)
			return ((char *)r);
		r--;
	}
	return (NULL);
}
