/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:36:12 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/02/23 20:36:15 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (lst == NULL && new == NULL)
		return ;
	if (lst && *lst)
	{
		while (temp -> next)
		{
			temp = temp -> next;
		}
		temp -> next = new;
	}
	else
		*lst = new;
}
