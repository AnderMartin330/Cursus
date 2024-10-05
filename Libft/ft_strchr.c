/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:54:43 by andemart          #+#    #+#             */
/*   Updated: 2024/09/15 19:54:43 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}

/*int main() {
	char str[] = "Hola mundo";
	char *ptr;
	int buscar = 'a';

	ptr = ft_strchr(str, buscar);
	if (ptr != NULL) {
		// Usar %ld para imprimir la posición de la diferencia entre punteros
		printf("Caracter '%c' encontrado en la posicion: %ld\n", buscar,
			(long)(ptr - str));
	} else {
		printf("Carácter '%c' no encontrado\n", buscar);
	}

	return (0);
}*/