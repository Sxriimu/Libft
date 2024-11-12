/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxriimu <sxriimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:44:41 by sxriimu           #+#    #+#             */
/*   Updated: 2024/11/09 22:44:42 by sxriimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strlen;
	size_t	i;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s) - start;
	str = malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	if (strlen > len)
		strlen = len;
	i = 0;
	while (i < strlen)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char str[] = "Je vais a l'ecole tout les jours";

	char *x = ft_substr(str, 2, 8);
	printf ("%s", x);
}
*/