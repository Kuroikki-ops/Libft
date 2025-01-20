/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diespino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:59:10 by diespino          #+#    #+#             */
/*   Updated: 2025/01/20 18:04:45 by diespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

//int	ft_isalpha(int c);
//int	ft_isdigit(int c);
//int	ft_isalnum(int c);
//int	ft_isascii(int c);
//int	ft_isprint(int c);
//int	ft_toupper(int c);
//int	ft_tolower(int c);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

//size_t	ft_strlen(const char *str);
//size_t	ft_strlcpy(char *dest, const char *src, size_t size);
//size_t	ft_strlcat(char *dest, const char *src, size_t size);

//void	ft_bzero(void *s, size_t n);
//void	*ft_memset(void *str, int c, size_t n);
//void	*ft_memcpy(void *dest, const void *src, size_t n);
//void	*ft_memmove(void *dest, const void *src, size_t n);

int     main(void)
{
	char	src[] = "HipoPotAmo";
	//char	dest[20] = "el ";
	int		i;

	//i = -1;
        //printf("Cadena src: ~%s~ (%ld + NULL)\n", src, ft_strlen(src));
	//printf("Cadena dest: ~%s~ (%ld)\n", dest, sizeof(dest));
	//printf("Buffer de dest: %ld (incluyendo NULL)\n", sizeof(dest));

	//while (src[++i])
	//	src[i] = ft_toupper(src[i]);
	//printf("Cadena string: ~%s~ (%ld + NULL)\n", src, ft_strlen(src));
	//i = -1;
	//while (src[++i])
        //        src[i] = ft_tolower(src[i]);

	//printf("Cadena string lower: ~%s~ (%ld + NULL)\n", src, ft_strlen(src));

	//ft_bzero(str, 5);
	//printf("Cadena modificada: %s\n", str);
	
	i = 'o';
	printf("La primera o del string ~%s~ es esta: %s\n", src, ft_strchr(src, i));
	printf("La ultima o del string ~%s~ es esta: %s\n", src, ft_strrchr(src, i));
	return (0);
}
