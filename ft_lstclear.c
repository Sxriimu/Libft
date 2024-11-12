/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxriimu <sxriimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:00:57 by sxriimu           #+#    #+#             */
/*   Updated: 2024/11/09 22:01:04 by sxriimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*elm;
	t_list	*tmp;

	elm = *lst;
	while (elm != NULL)
	{
		tmp = elm->next;
		ft_lstdelone(elm, del);
		elm = tmp;
	}
	*lst = NULL;
}
