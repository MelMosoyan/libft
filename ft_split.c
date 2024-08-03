/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:57:03 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/17 19:21:43 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (s[i])
	{
		if (s[i++] == c)
			continue ;
		else
		{
			while (s[i] && s[i] != c)
				i++;
			num++;
		}
	}
	return (num);
}

void	ft_free(char **res)
{
	int	i;

	i = 0;
	if (res != NULL)
	{
		while (res[i])
		{
			free(res[i]);
			i++;
		}
	}
	free(res);
}

void	ft_init(char **res, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		if (s[i] != c && s[i])
		{
			while (s[i] && s[i] != c)
			{
				k++;
				i++;
			}
			res[j] = ft_substr((s + i) - k, 0, k);
			if (res[j] == NULL)
				ft_free(res);
			j++;
		}
		else
			i++;
	}
	res[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (s == NULL)
		return (NULL);
	if (*s == '\0')
	{
		res = (char **)malloc(sizeof(char *));
		res[0] = NULL;
		return (res);
	}
	res = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (res == NULL)
		return (NULL);
	ft_init(res, s, c);
	return (res);
}

// int main()
// {
// 	char	*a = "tripoule";
// 	char	**result = ft_split(a,'\0');
// 	size_t i;

// 	i = 0;
// 	printf("%s \n",result[0]);
	//printf("%s",result[1]);
	//printf("%s \n",result[0]);
	//printf("%s",result[1]);
	//while (result[i] != NULL)
	//{
	//	printf("%s \n",result[i]);
	//	i++;
	//}
//}
