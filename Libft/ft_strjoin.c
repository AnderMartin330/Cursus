/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:48:08 by andemart          #+#    #+#             */
/*   Updated: 2024/10/06 17:28:33 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ret;
	int i;
	int j;

	i = 0;
	j = 0;

	if (!s1 || !s2)
		return (NULL);

	ret = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!ret)
		return (NULL);

	while (s1[i])
		ret[j++] = s1[i++];
	i = 0;
	while (s2[i])
		ret[j++] = s2[i++];

	ret[j] = '\0';
	return (ret);
}