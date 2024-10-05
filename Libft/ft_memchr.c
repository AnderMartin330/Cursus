/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmemchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:54:35 by andemart          #+#    #+#             */
/*   Updated: 2024/09/17 16:54:35 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t cur;

	str = (unsigned char *)s;
	cur = 0;
	while (cur < n)
	{
		if (str[cur] == (unsigned char)c)
			return ((void *)&str[cur]);
		cur++;
	}
	return (NULL);
}