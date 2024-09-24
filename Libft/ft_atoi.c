/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:21:23 by andemart          #+#    #+#             */
/*   Updated: 2024/09/23 14:21:23 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str){
    // Primero definimos las variables:
    unsigned int num; //Guardará el número entero que se forma al convertir la cadena. Usa unsigned int porque al principio es positivo y no necesitamos preocuparse por el signo hasta el final.
    int i; //Este es el índice que utilizamos para recorrer la cadena str.
    int np; // Esta variable indica si el número será positivo o negativo. Inicialmente se establece como 1 (positivo).

    // Inicializamos las variables:
    np = 1; //Establece el valor predeterminado como positivo
    i = 0; // Comienza el indice desde el principio de la cadena
    num = 0; // El numero se inicia en 0, y lo iremos formando a medida que leemos los digitos

    // Saltamos los espacios en blanco
    /* Aquí, la función recorre la cadena y omite cualquier espacio en blanco o caracteres invisibles como espacios (' '), tabulaciones ('\t'), nuevas líneas ('\n'), etc.
       hasta llegar al primer carácter relevante que puede ser un signo o un número. */
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n' || str[i] == '\v'){
        i++;
    }

    // Manejar el signo:
    /* Si es un signo negativo ('-'), cambia np a -1, indicando que el numero sera negativo.
       Si es un signo positivo ('+'), no hace nada con np (el numero sigue siendo positivo).
       se avanza en la cadena con i++, para pasar el signo y comenzar a procesar los digitos. */
    if(str[i] == '+' || str[i] == '-'){
        if (str[i++] == '-')
            np = -1;
    }

    // Convertir los caracteres numéricos:
    // Este bucle recorre cada carácter numérico de la cadena (del '0' al '9').
    /* num = num * 10 + (str[i] - '0'): Aquí se actualiza el valor de num. Multiplicamos el valor actual de num por 10 (para desplazarlo una posición a la izquierda) y luego sumamos el valor del nuevo dígito.
       Restamos '0' para convertir el carácter numérico en su valor entero.*/
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }

    // Devolver el resultado:
    // Finalmente, el resultado de num se multiplica por np (que es 1 o -1 dependiendo del signo) para obtener el valor final.
    // Se convierte en int para asegurarse de que el resultado devuelto es de tipo int.
    return ((int)(np * num));
}