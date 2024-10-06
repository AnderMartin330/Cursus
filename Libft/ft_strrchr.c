/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:37:20 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 17:29:26 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*final = NULL;

	while (*str)
	{
		if (*str == (char)c)
		{
			final = str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return ((char *) final);
}

/*int main() {
	const char str[] = "Hola mundo";
	char *ptr;

	// Buscamos la ultima aparicion de 'o' en la cadena
	ptr = ft_strrchr(str, 'o');

	if (ptr != NULL) {
		// Imprime la posicion de la ultima aparición del caracter
		printf("Última aparicion de 'o' en la posicion: %ld\n", (long)(ptr
				- str));
	} else {
		printf("Carácter no encontrado\n");
	}

	return (0);
}*/