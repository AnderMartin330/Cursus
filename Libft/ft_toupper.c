/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:03:59 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 17:29:59 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main(){
	char letra = 'b';
	char mayuscula = ft_toupper(letra);

	printf("Letra original: %c\n", letra);
	printf("Letra en mayuscula: %c\n", mayuscula);

	//Prueba con un caracter que no sea una letra minuscula
	char simbolo = '@';
	printf("Simbolo original: %c\n", simbolo); //Imprime '@'
	printf("Simbolo modificado: %c\n ", ft_toupper(simbolo)); //Imprime '@'

	return (0);
}*/