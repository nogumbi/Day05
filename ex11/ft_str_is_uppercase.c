/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:26:14 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 14:26:30 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<string.h>

int     ft_is_numeric(char *str)
{
    int     i;
    i = 0;
    
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            return 1;
        else
            return 0;
    }
}
