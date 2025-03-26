/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 16:21:56 by diespino          #+#    #+#             */
/*   Updated: 2025/03/25 16:50:04 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new_lst;// Nueva lista
	t_list	*node;// Nuevo nodo
	void	*new_content;// Content modificado

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
//		Se almacenan los datos modificados en (new_content)
		new_content = f(lst->content);
//		Se crea el nuevo nodo con los datos de (new_content)
		node = ft_lstnew(new_content);
//		Si node == NULL
		if (!node)
		{
//			Borra (new_content)
			del(new_content);
//			Elimina todos los nodos de (new_lst)
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
//		Pone el nuevo nodo al final de los que ya haya en (new_lst), si los hay
		ft_lstadd_back(&new_lst, node);
//		Pasa al siguiente nodo
		lst = lst->next;
	}
	return (new_lst);
}
