/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:03:18 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/17 15:54:43 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i])
	{
		if (!is_set(s1[i], set))
			break ;
		i++;
	}
	if (s1[i] == '\0')
	{
		return (ft_strdup(""));
	}
	while (j > i)
	{
		j--;
		if (!is_set(s1[j], set))
			break ;
	}
	return (ft_substr(s1, (unsigned int)i, (j - i + 1)));
}

// int main()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
//     char *s2 = " \n\t";
// 	// printf("%s",ft_strtrim(s1,s2));
// 	// printf("%zu", ft_strlen("Hello \t  Please\n Trim me !"));
// 	printf("%s", ft_strtrim(s1, s2));
// }
