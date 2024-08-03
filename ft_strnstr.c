/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 18:59:53 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/13 19:29:34 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	char	*a;

	a = NULL;
	if (str == NULL && len == 0)
		return (NULL);
	if (*str == '\0' && *sub == '\0' )
		return ((char *)str);
	if (str == NULL && len > 0)
		*a = *str;
	if (*str == '\0' && len > 0)
		return (NULL);
	while (len >= ft_strlen(sub))
	{
		if (ft_strncmp(str, sub, ft_strlen(sub)) == 0)
			return ((char *)str);
		str++;
		len--;
	}
	return (0);
}

//#include <stdio.h>
//int main()
//{
//	char * empty = (char *)"";
//	char *x = NULL;
//	x++;
//	printf("%s \n", ft_strnstr(((void *)0), "fake", 3));
//	printf("%s", ft_strnstr(empty, "coucou", -1));
//}
