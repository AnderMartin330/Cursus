/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:50:07 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 18:28:12 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;

	while (dest[i] && i < size)
		i++;
	while (src[len] && i + len + 1 < size)
	{
		dest[i + len] = src[len];
		len++;
	}
	if (i < size)
		dest[i + len] = '\0';
	return (i + ft_strlen(src));
}