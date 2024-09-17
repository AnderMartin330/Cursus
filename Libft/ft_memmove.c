/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:00:39 by andemart          #+#    #+#             */
/*   Updated: 2024/09/17 16:00:39 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s)
        return dest; // Si origen y destino son iguales, no hacemos nada

    // si el destino esta despues del origen en la memoria, copiamos de atras hacia adelante
    if (d > s){
        d += n;
        s += n;
        while (n--){
            *(--d) = *(--s);
        }
        } else{
        // Si el destino esta antes del origen en la memoria, copiamos de adelante hacia atras
        while (n--){
            *d++ = *s++;
        }
    }
    return (dest);
}