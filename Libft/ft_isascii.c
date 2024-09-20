/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:53:58 by andemart          #+#    #+#             */
/*   Updated: 2024/09/15 14:53:58 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int ft_isascii(int i){
    if (i >= 0 && i <= 127)
        return 1;
    return 0;
}

/*int main(){
    printf("%d\n", ft_isascii(65));
    printf("%d\n", ft_isascii(128));
    return 0;
}*/