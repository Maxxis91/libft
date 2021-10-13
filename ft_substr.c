/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:50:21 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/13 16:34:14 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (len > 0)
	{
		res = (char *)malloc(len + 1);
		if (!res)
			return (NULL);
		(void)ft_strlcpy(res, s + start, len + 1);	//посмотреть где-то не хватает '\0' по ходу
		return (res);
	}
	return (NULL);
}
