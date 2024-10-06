/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:10:34 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 18:12:52 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *d, void *src, size_t len)
{
	char	*dest;
	char	*src_ptr;

	dest = d;
	src_ptr = src;
	if(!d && !src)
		return (NULL);
	while (len-- > 0)
	{
		*dest++ = *src_ptr++;
	}
	return (d);
}

/*int main(){
	char src[] = "Hello, World!";
	char dest[20];
	ft_memcpy(dest, src, 13);
	printf("%s\n", dest);
	return (0);
}*/