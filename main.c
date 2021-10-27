/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmelissi <gmelissi@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:59:07 by gmelissi          #+#    #+#             */
/*   Updated: 2021/10/21 20:02:54 by gmelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char	ft_strtest(unsigned int i, char c)
{
	return c + (i % 2);
}

int	main(void)
{

	//ft_isalpha
	int	c0 = 65;
	printf("isalpha(%c) =\t%d\n", c0, isalpha(c0));
	printf("ft_isalpha(%c) =\t%d\n\n", c0, ft_isalpha(c0));

	//ft_isdigit
	int	c1 = 51;
	printf("isdigit(%c) =\t%d\n", c1, isdigit(c1));
	printf("ft_isdigit(%c) =\t%d\n\n", c1, ft_isdigit(c1));

	//ft_isalnum
	int	c2 = 99;
	printf("isalnum(%c) =\t%d\n", c2, isalnum(c2));
	printf("ft_isalnum(%c) =\t%d\n\n", c2, ft_isalnum(c2));

	//ft_isascii	
	int	c3 = 199;
	printf("isascii(%c) =\t%d\n", c3, isascii(c3));
	printf("ft_isascii(%c) =\t%d\n\n", c3, ft_isascii(c3));

	//ft_isprint
	int	c4 = 99;
	printf("isprint(%c) =\t%d\n", c4, isprint(c4));
	printf("ft_isprint(%c) =\t%d\n\n", c4, ft_isprint(c4));

	//ft_toupper
	int	c5 = 43;
	printf("toupper(%c) =\t%c\n", c5, toupper(c5));
	printf("ft_toupper(%c) =\t%c\n\n", c5, ft_toupper(c5));

	//ft_tolower
	int	c6 = 61;
	printf("tolower(%c) =\t%c\n", c6, tolower(c6));
	printf("ft_tolower(%c) =\t%c\n\n", c6, ft_tolower(c6));

	//ft_strlen
	char	*s0 = "Fukken fuck me!";
	printf("strlen(%s) =\t%zu\n", s0, strlen(s0));
	printf("ft_strlen(%s) =\t%zu\n\n", s0, ft_strlen(s0));
	
	//ft_strchr
	char	s1 = 'u';
	printf("strchr(%s, %c) =\t%s\n", s0, s1, strchr(s0, s1));
	printf("ft_strchr(%s, %c) =\t%s\n\n", s0, s1, ft_strchr(s0, s1));
	
	//ft_strrchr
	char	s2 = 'k';
	printf("strrchr(%s, %c) =\t\t%s\n", s0, s2, strrchr(s0, s2));
	printf("ft_strrchr(%s, %c) =\t%s\n\n", s0, s2, ft_strrchr(s0, s2));

	//ft_strncmp
	char	*s3 = "Fukken move, bitch?";
	int		n0 = 8;
	printf("strncmp(%s, %s, %d) =\t%d\n", s0, s3, n0,  strncmp(s0, s3, n0));
	printf("ft_strncmp(%s, %s, %d) =\t%d\n\n", s0, s3, n0, ft_strncmp(s0, s3, n0));

	//ft_memset & ft_bzero
	char			pChar[26];
	int				offset = 0;
	int				val0 = 1;

	memset(pChar,   val0,  sizeof(pChar) + offset) ;   // 1	
	printf("memset: char: %d; ", pChar[24]);

	bzero(pChar,	sizeof(pChar)) ;   // 0	
	printf("bzero: char: %d; ", pChar[24]);
	
	ft_memset(pChar,   val0,  sizeof(pChar) + offset) ;   // 1
	printf("ft_memset: char: %d; ", pChar[24]);

	ft_bzero(pChar,		sizeof(pChar)) ;   // 0
	printf("ft_bzero: char: %d\n\n", pChar[24]);

	//ft_memchr
	int		c7 = 101;
	size_t	n1 = 5;
	printf("memchr(%s, %c, %zu) =\t\t%s\n", s0, c7, n1, memchr(s0, c7, n1));
	printf("ft_memchr(%s, %c, %zu) =\t%s\n\n", s0, c7, n1, ft_memchr(s0, c7, n1));
	
	//ft_memcpy
	size_t	n2 = 11;
	size_t	n3 = 12;

	offset = 7;

	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("memcpy(%s, %s, %zu) =\t", pChar, s3, n2);
	printf("%s\n", memcpy(pChar, s3, n2));
	printf("memcpy(%s, %s, %zu) =\t", pChar + offset, pChar, n3); 
	memcpy(pChar + offset, pChar, n3);
	printf("%s\n\n", pChar);
	
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("ft_memcpy(%s, %s, %zu) =\t", pChar, s3, n2); 
	printf("%s\n", ft_memcpy(pChar, s3, n2));
	printf("ft_memcpy(%s, %s, %zu) =\t", pChar + offset, pChar, n3); 
	ft_memcpy(pChar + offset, pChar, n3);
	printf("%s\n\n", pChar);
	
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("memcpy(%s, %s, %zu) =\t", pChar, s3, n2);
	printf("%s\n", memcpy(pChar, s3, n2));
	printf("memcpy(%s, %s, %zu) =\t", pChar, pChar + offset, n3); 
	memcpy(pChar, pChar + offset, n3);
	printf("%s\n\n", pChar);
	
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("ft_memcpy(%s, %s, %zu) =\t", pChar, s3, n2); 
	printf("%s\n", ft_memcpy(pChar, s3, n2));
	printf("ft_memcpy(%s, %s, %zu) =\t", pChar, pChar + offset, n3); 
	ft_memcpy(pChar, pChar + offset, n3);
	printf("%s\n\n", pChar);
	
	//ft_memcmp
	size_t		n4 = 9;
	char		*s4 = "Fuck meh ";
	char		*s5 = "Fuck meh";
	printf("memcmp(%s, %s, %zu) =\t%d\n", pChar, s3, n4,  memcmp(s0, s3, n4));
	printf("ft_memcmp(%s, %s, %zu) =\t%d\n\n", pChar, s3, n4, ft_memcmp(s0, s3, n4));
	printf("memcmp(%s, %s, %zu) =\t%d\n", s4, s5, n4,  memcmp(s4, s5, n4));
	printf("ft_memcmp(%s, %s, %zu) =\t%d\n\n", s4, s5, n4, ft_memcmp(s4, s5, n4));

	//ft_memmove
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("memmove(%s, %s, %zu) =\t", pChar, s3, n2);
	printf("%s\n", memmove(pChar, s3, n2));
	printf("memmove(%s, %s, %zu) =\t", pChar + offset, pChar, n3); 
	memmove(pChar + offset, pChar, n3);
	printf("%s\n\n", pChar);
	
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("ft_memmove(%s, %s, %zu) =\t", pChar, s3, n2); 
	printf("%s\n", ft_memmove(pChar, s3, n2));
	printf("ft_memmove(%s, %s, %zu) =\t", pChar + offset, pChar, n3); 
	ft_memmove(pChar + offset, pChar, n3);
	printf("%s\n\n", pChar);
	
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("memmove(%s, %s, %zu) =\t", pChar, s3, n2);
	printf("%s\n", memmove(pChar, s3, n2));
	printf("memmove(%s, %s, %zu) =\t", pChar, pChar + offset, n3); 
	memmove(pChar, pChar + offset, n3);
	printf("%s\n\n", pChar);
	
	for (size_t i = 0; i < sizeof(pChar); i++)
		memset(&pChar[i], i + 'A', 1) ;

	printf("ft_memmove(%s, %s, %zu) =\t", pChar, s3, n2); 
	printf("%s\n", ft_memmove(pChar, s3, n2));
	printf("ft_memmove(%s, %s, %zu) =\t", pChar, pChar + offset, n3); 
	ft_memmove(pChar, pChar + offset, n3);
	printf("%s\n\n", pChar);
	
	//ft_strnstr
	
	const char	*s6 = "Fed up with it? LOL! ";
	const char	*s7 = "ROFL, me too!";
	size_t		n5 = 4;

	printf("strnstr(%s, %s, %zu) =\t%s\n", s6, s7, n5, strnstr(s6, s7, n5));
	printf("ft_strnstr(%s, %s, %zu) =\t%s\n\n", s6, s7, n5, ft_strnstr(s6, s7, n5));

	//ft_strlcpy
	char	buf[15];
	size_t	n6 = 15;

	ft_memset(buf, 33, sizeof(buf));
	printf("ft_memset; buf =\t%s\n", buf);
	printf("strlcpy(buf[15], %s, %zu) =\t\t%zu\n", s6, n6, strlcpy(buf, s6, n6));
	printf("buf =\t%s\n", buf);
	ft_memset(buf, 33, sizeof(buf));
	printf("ft_memset; buf =\t%s\n", buf);
	printf("ft_strlcpy(buf[15], %s, %zu) =\t%zu\n", s6, n6, ft_strlcpy(buf, s6, n6));
	printf("buf =\t%s\n\n", buf);
	
	//ft_strlcat
	char	buf0[30];
	size_t	n7 = 30;

	for (size_t i = 0; i < sizeof(buf0); i++)
		ft_memset(&buf0[i], i + 'A', 1) ;
	printf("ft_memset; buf0 =\t%s\n", buf0);
	(void)ft_strlcpy(buf0, s6, n7);
	printf("ft_strlcpy; buf0 =\t%s\n", buf0);
	printf("strlcat(buf0[30], %s, %zu) =\t\t%zu\n", s7, n7, strlcat(buf0, s7, n7));
	printf("strlcat; buf0 =\t\t%s\n", buf0);

	for (size_t i = 0; i < sizeof(buf0); i++)
		ft_memset(&buf0[i], i + 'A', 1) ;
	printf("ft_memset; buf0 =\t%s\n", buf0);
	(void)ft_strlcpy(buf0, s6, n7);
	printf("ft_strlcpy; buf0 =\t%s\n", buf0);
	printf("ft_strlcat(buf0[30], %s, %zu) =\t%zu\n", s7, n7, ft_strlcat(buf0, s7, n7));
	printf("ft_strlcat; buf0 =\t%s\n\n", buf0);
	
	//ft_atoi
	char	*s8 = "−9223372036854775809";
	char	*s9 = "9223372036854775807";
	char	*sA = "−9223372036854775808";
	char	*sB = "9223372036854775808";
	
	printf("atoi(%s) =\t%d\n", s8, atoi(s8));
	printf("ft_atoi(%s) =\t%d\n", s8, ft_atoi(s8));
	printf("atoi(%s) =\t%d\n", s9, atoi(s9));
	printf("ft_atoi(%s) =\t%d\n", s9, ft_atoi(s9));
	printf("atoi(%s) =\t%d\n", sA, atoi(sA));
	printf("ft_atoi(%s) =\t%d\n", sA, ft_atoi(sA));
	printf("atoi(%s) =\t%d\n", sB, atoi(sB));
	printf("ft_atoi(%s) =\t%d\n\n", sB, ft_atoi(sB));

	//ft_calloc
	int	*ptr;
	int	n8 = 5;
	ptr = (int*)calloc(n8, sizeof(int));
	if (!ptr)
		printf("Memory not allocated.\n");
	else
		printf("Memory successfully allocated using calloc.\n");
	printf("The elements of the array are:");
	for (int i = 0; i < n8; ++i)
		printf(" %d", ptr[i]);
	for (int i = 0; i < n8; ++i)
		ptr[i] = i + 1;
	printf("\nThe elements of the array are:");
	for (int i = 0; i < n8; ++i)
		printf(" %d", ptr[i]);
	free(ptr);

	ptr = (int*)ft_calloc(n8, sizeof(int));
	if (!ptr)
		printf("\nMemory not allocated.\n");
	else
		printf("\nMemory successfully allocated using ft_calloc.\n");
	printf("The elements of the array are:");
	for (int i = 0; i < n8; ++i)
		printf(" %d", ptr[i]);
	for (int i = 0; i < n8; ++i)
		ptr[i] = i + 1;
	printf("\nThe elements of the array are:");
	for (int i = 0; i < n8; ++i)
		printf(" %d", ptr[i]);
	free(ptr);
	printf("\n\n");
	
	//ft_strdup
	printf("%s = strdup(%s)\n", s9, s3);
	s9 = strdup(s3);
	printf("res =\t%s\n", s9);
	printf("%s = strdup(%s)\n", sB, s3);
	sB = strdup(s3);
	printf("res =\t%s\n\n", sB);
	
	//ft_substr
	char	*sC = "i just want this part ";
	char	*sD;
	int		n9 = 0;
	int		nA = 12;
	sD = ft_substr(sC, n9, nA);
	printf("ft_substr(%s, %d, %d) =\t\"%s\"\n", sC, n9, nA, sD);
	printf("strncmp(%s, %s, %d) =\t%d\n\n", sD, sC + n9, nA, strncmp(sD, sC + n9, nA));

	//ft_strjoin
	char	*sE;
	sE = ft_strjoin(s4, sC);
	printf("ft_strjoin(%s, %s) =\t\"%s\"\n\n", s4, sC, sE);

	//ft_strtrim
	char	*sF = "          ";
	char	*sG = "";
	char	*sH = ft_strtrim(sF, " ");
	printf("ft_strtrim(\"%s\", \" \\n\\t\" =\n\"%s\"\n", sF, sH);
	printf("ft_strtrim expected result =\n\"%s\"\n\n", sG);

	//ft_wordcnt
//	printf("ft_wordcnt(\"%s\", \'%c\') =\t%zu\n", sG, '\t', ft_wordcnt(sG, '\t'));
	
	//ft_split
	char	*sI = "      split       this for   me  !       ";
	char	si = ' ';
	char	**SJ;
	SJ = ft_split(sI, si);
	printf("ft_split(\"%s\", \'%c\') =\t\"", sI, si);
	for (int i = 0; SJ[i]; i++)
		printf("%s", SJ[i]);
	printf("\"\n\n");

	//ft_itoa
	int	nB = INT_MAX;
	printf("ft_itoa(%d) =\t\"%s\"\n", nB, ft_itoa(nB));
//	while (1);

	//ft_strmapi
	printf("ft_strmapi: \"%s\"\n\n", ft_strmapi("", ft_strtest));

	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("LONG_MIN: %ld\n", LONG_MIN);
	printf("LONG_MAX: %ld\n", LONG_MAX);
	printf("LLONG_MIN: %lld\n", LLONG_MIN);
	printf("LLONG_MAX: %lld\n", LLONG_MAX);
	printf("SIZE_MAX: %zu\n\n", SIZE_MAX);

	return (0);
}
