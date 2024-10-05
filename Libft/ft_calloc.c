/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:26:23 by andemart          #+#    #+#             */
/*   Updated: 2024/09/25 18:26:23 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *addr;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	addr = malloc(nitems * size);
	if (!addr)
	{
		return (NULL);
	}
	ft_bzero(addr, size * nitems);
	return (addr);
}