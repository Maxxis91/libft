/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:57:41 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/17 15:47:17 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcnt(char const *s, char c)
{
	size_t	res;
	char	*tr;

	res = 0;
	tr = (char *)s;
	if (!tr || !*tr)
		return (res);
	while (*tr)
	{
		if (*tr != c && (*(tr + 1) == c || !*(tr + 1)))
			res++;
		tr++;
	}
	return (res);
}

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	len;
	char	*r;

	len = 0;
	r = (char *)s;
	while (*r == c)
		r++;
	while (*r && *r != c)
	{
		len++;
		r++;
	}
	return (len);
}

static char	**ft_free_2d(char **ar)
{
	size_t	i;

	i = 0;
	while (ar[i])
	{
		free(ar[i]);
		ar[i] = NULL;
		i++;
	}
	free(ar);
	ar = NULL;
	return (ar);
}


char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*r;
	size_t	cnt;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	r = (char *)s;
	cnt = ft_wordcnt(r, c);
	res = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!res)
		return (NULL);
	i = 0;
	len = 0;
	while (i < cnt)
	{
		len = ft_wordlen(r, c) + 1;
		while (*r == c)
			r++;
		res[i] = (char *)malloc(len);
		if (!res[i])
			return (ft_free_2d(res));
		ft_strlcpy(res[i], r, len);
		r += len;
		i++;
	}
	res[i] = NULL;
	return (res);
}

