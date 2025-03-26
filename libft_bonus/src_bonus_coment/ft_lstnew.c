/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 14:26:53 by diespino          #+#    #+#             */
/*   Updated: 2025/03/25 14:06:50 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_node;

//	Reserva el espacio para el nuevo nodo
	new_node = malloc(sizeof(t_list));
//
	if (!new_node)
		return (NULL);
//	Le asigna los nuevos datos en el apartado content
	new_node->content = content;
//	Inicializa next y prev a NULL
	new_node->next = NULL;
	new_node->prev = NULL;
//
	return (new_node);
}
