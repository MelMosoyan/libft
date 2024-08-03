/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:02:13 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/20 21:02:19 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int num)
{
	int		i;
	long	n;

	i = 0;
	n = num;
	if (n >= 0 && n <= 9)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	int		i;
	char	*res;

	i = length(n);
	num = n;
	res = (char *)malloc(length(n) + 1);
	if (res == NULL)
		return (NULL);
	if (num < 0)
		num *= -1;
	while (i > 0)
	{
		res[--i] = (num % 10) + 48;
		num /= 10;
	}
	if (n < 0)
		res[0] = '-';
	res[length(n)] = '\0';
	return (res);
}
// #include <stdio.h>
// #include <limits.h>

// int main()
// {
// 	printf("%s\n", ft_itoa(-0));
//     printf("%s", ft_itoa(INT_MAX));
// }
