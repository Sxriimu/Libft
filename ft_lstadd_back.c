/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxriimu <sxriimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:00:07 by sxriimu           #+#    #+#             */
/*   Updated: 2024/11/09 22:00:32 by sxriimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (!lst)
		return ;
	if (*lst)
	{
		str = ft_lstlast(*lst);
		str->next = new;
	}
	else
		*lst = new;
}
