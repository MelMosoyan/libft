/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 19:31:46 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/13 19:47:03 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t length, size_t bytes)
{
	void	*ptr;

	if (length == 0 || bytes == 0)
	{
		length = 1;
		bytes = 1;
	}
	if (bytes != 0 && (SIZE_MAX / length < bytes))
		return (NULL);
	ptr = malloc(length * bytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, length * bytes);
	return (ptr);
}
