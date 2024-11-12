/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sxriimu <sxriimu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:01:50 by sxriimu           #+#    #+#             */
/*   Updated: 2024/11/09 22:02:46 by sxriimu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*last;

	// Création d'une liste chaînée avec trois éléments (contenu de type int)
	t_list *lst = malloc(sizeof(t_list));       // Premier élément
	t_list *second = malloc(sizeof(t_list));    // Deuxième élément
	t_list *third = malloc(sizeof(t_list));     // Troisième élément
	// Initialisation des contenus
	lst->content = (void *)(intptr_t)1;    // Contenu du premier élément : 1
	second->content = (void *)(intptr_t)2; // Contenu du deuxième élément : 2
	third->content = (void *)(intptr_t)3;  // Contenu du troisième élément : 3
	// Liens entre les éléments
	lst->next = second;  // Le premier élément pointe vers le deuxième
	second->next = third; // Le deuxième élément pointe vers le troisième
	third->next = NULL; 
		// Le troisième élément pointe vers NULL (fin de la liste)
	// Test de ft_lstlast : Afficher le dernier élément
	last = ft_lstlast(lst);
	if (last)
		printf("Dernier élément de la liste : %d\n",
			(int)(intptr_t)last->content);  // Devrait afficher 3
}
*/