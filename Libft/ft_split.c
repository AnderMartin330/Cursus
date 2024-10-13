/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:57:13 by andemart          #+#    #+#             */
/*   Updated: 2024/10/13 12:29:32 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**lst;
	int		str_index;
	int		array_index;
	int		array_str_index;

	str_index = 0;
	array_index = 0;
	array_str_index = 0;
	
	if (!s)
		return (NULL);
	lst = (char **)malloc((ft_strlen(s) + 1) * sizeof(char *));
	while(s[str_index])
    {
        if(s[str_index] == c)
        {
            lst[array_index][array_str_index] = '\0';
            array_index++;
            str_index++;
            array_str_index = 0;
            continue;
        }
		lst[array_index][array_str_index] = s[str_index];
        str_index++;
	}
	lst[array_index++] = NULL;
	return (lst);
}
