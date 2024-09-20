/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:21:10 by andemart          #+#    #+#             */
/*   Updated: 2024/09/13 16:21:10 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int isdigit(int arg){
    if (arg >= 48 && arg <= 57)
        return (1);
    return (0);
}

/*int main(){
    printf("%d\n", isdigit(48)); // 1
    printf("%d\n", isdigit(57)); // 1
    printf("%d\n", isdigit(65)); // 0
}*/