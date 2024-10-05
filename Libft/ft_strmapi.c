/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:46:14 by andemart          #+#    #+#             */
/*   Updated: 2024/10/05 15:46:14 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;

    if(!s || !f)
        return (NULL);
    str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!str)
        return (NULL);

    i = 0;
    while(s[i]){
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
