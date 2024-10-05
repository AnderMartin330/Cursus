/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:28:28 by andemart          #+#    #+#             */
/*   Updated: 2024/10/05 14:28:28 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}