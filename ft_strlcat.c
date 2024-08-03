/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:02:47 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/10 18:23:24 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = 0;
	j = 0;
	if (!dest && dstsize == 0)
		return (ft_strlen(src));
	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = ft_strlen(dest);
	if (d < dstsize - 1 && dstsize > 0)
	{
		while (src[j] && (i < dstsize - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (d > dstsize)
		d = dstsize;
	return (d + s);
}
/*
#include <stdio.h>
int main()
{
	char dest[10] = "asdfg";
	const char src[] = "hjklzxc";
	printf("%zu", ft_strlcat(dest, src, 10));
	printf("%s", dest);
}*/
