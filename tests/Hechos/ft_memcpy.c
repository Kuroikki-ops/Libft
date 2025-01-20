/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <diespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:04:33 by diespino          #+#    #+#             */
/*   Updated: 2025/01/16 18:31:28 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	//if (src == NULL && dest == NULL)
	//	return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((const char*)src)[i];
		i++;
	}
	return (dest);
}
