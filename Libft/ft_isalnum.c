/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:31:27 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 17:10:08 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

/*int main(){
	printf("%d\n", isalnum('A')); // 1
	printf("%d\n", isalnum('a')); // 1
	printf("%d\n", isalnum('0')); // 1
	printf("%d\n", isalnum(' ')); // 0
}*/