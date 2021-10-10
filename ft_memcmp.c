/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:06:26 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/09 21:42:19 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*r1;
	const unsigned char	*r2;

	r1 = s1;
	r2 = s2;
	while (!(*r1 - *r2) && n > 0)
	{
		r1++;
		r2++;
		n--;
	}
	if (n > 0)
		return (*r1 - *r2);
	return (0);
}
