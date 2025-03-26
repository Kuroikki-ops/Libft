/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:07:57 by diespino          #+#    #+#             */
/*   Updated: 2025/03/25 16:52:10 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list  *tmp;

//	ej. Nodos: (A)<->(B)<->(C) | (new) (tmp)
//
//	**lst -> *lst -> (A)
//
//	Si no hay nodos, new es el primero
	if (!*lst)
		*lst = new;
//	Sino
	else
	{
//		Se almacena en el nodo (tmp) la direccion del ultimo, (tmp)=(C)
		tmp = ft_lstlast(*lst);
//		Se asigna al next de ((tmp)=(C)) el nuevo nodo (new)
		tmp->next = new;
//		Al prev del nodo (new) se le asigna el nodo anterior ((tmp)=(C))
		new->prev = tmp;
	}
//              Nodos: (A)<->(B)<->(C)=(tmp)<->(new)
}
