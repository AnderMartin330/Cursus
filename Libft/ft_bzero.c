/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:55:18 by andemart          #+#    #+#             */
/*   Updated: 2024/09/15 15:55:18 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>  // Para bzero
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*int main() {
	char buffer[10];

	// Llenar el buffer con caracteres arbitrarios
	for (int i = 0; i < 10; i++) {
		buffer[i] = 'A';
	}

	// Imprimir el contenido del buffer antes de usar bzero
	printf("Antes de bzero: ");
	for (int i = 0; i < 10; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");

	// Usar bzero para llenar los primeros 5 bytes con ceros
	ft_bzero(buffer, 5);

	// Imprimir el contenido del buffer después de usar bzero
	printf("Después de bzero: ");
	for (int i = 0; i < 10; i++) {
		if (buffer[i] == 0) {
			printf("0 ");  // Mostrar ceros
		} else {
			printf("%c ", buffer[i]);  // Mostrar caracteres restantes
		}
	}
	printf("\n");

	return (0);
}*/