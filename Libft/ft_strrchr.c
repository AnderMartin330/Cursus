/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:37:20 by andemart          #+#    #+#             */
/*   Updated: 2024/09/16 14:37:20 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *str, int c) {
    const char *final = NULL;  // Puntero para almacenar la ultima aparicion

    // Recorremos toda la cadena caracter por caracter
    while (*str) {
        // Si encontramos el caracter, guardamos la posicion
        if (*str == (char)c) {
            final = str;  // Asignamos el puntero, no el caracter
        }
        str++;  // Avanzamos al siguiente caracter
    }

    // Si buscamos el caracter nulo '\0', devolvemos un puntero al final de la cadena
    if (c == '\0') {
        return (char *)str;
    }

    // Retornamos la ultima ocurrencia o NULL si no se encontro
    return (char *)final;
}

/*int main() {
    const char str[] = "Hola mundo";
    char *ptr;

    // Buscamos la ultima aparicion de 'o' en la cadena
    ptr = ft_strrchr(str, 'o');
    
    if (ptr != NULL) {
        // Imprime la posicion de la ultima aparición del caracter
        printf("Última aparicion de 'o' en la posicion: %ld\n", (long)(ptr - str));
    } else {
        printf("Carácter no encontrado\n");
    }

    return 0;
}*/