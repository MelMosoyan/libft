/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:25:41 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/01/29 19:16:35 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dest;
	b = (unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		while (n--)
			*a++ = *b++;
	}
	else
	{
		while (n--)
			a[n] = b[n];
	}
	return (dest);
}
