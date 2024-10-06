/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:24:50 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 17:29:45 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main(){
	char letra = 'B';
	char minuscula = ft_tolower(letra);

	printf("Letra original: %c\n", letra);
	printf("Letra en minuscula %c\n", minuscula);

	//Prueba con un caracter que no sea una letra mayuscula
	char simbolo = '@';
	printf("Simbolo original %c\n", simbolo);
	printf("Simbolo modificado %c\n", ft_tolower(simbolo));

	return (0);
}*/