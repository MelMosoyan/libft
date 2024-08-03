/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:38:02 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/13 19:43:55 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>
int main()
{
	const char s[] = "asdfghjkl";
	printf("%s", ft_strdup(s));
}*/
