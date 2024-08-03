/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:44:57 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/17 15:50:46 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			j;
	char			*res;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) < len + start)
		len = ft_strlen(s) - start;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	else
	{
		while (j < len && s[start])
		{
			res[j] = s[start];
			j++;
			start++;
		}
		res[j] = '\0';
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	const char s[] = "esimanushHayastani";
	printf("%s", ft_substr(s, 9, 8));
}*/
