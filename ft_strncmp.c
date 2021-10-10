/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:07:54 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/09 21:32:12 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*r1;
	const unsigned char	*r2;

	r1 = (const unsigned char *)s1;
	r2 = (const unsigned char *)s2;
	if (!n)
		return (0);
	while (*r1 && *r2 && !(*r1 - *r2) && (n > 1))
	{
		n--;
		r1++;
		r2++;
	}
	return (*(unsigned char *)r1 - *(unsigned char *)r2);
}
