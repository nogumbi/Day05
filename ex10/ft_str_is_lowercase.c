/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:20:34 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 14:21:17 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<string.h>

int     ft_str_is_lowercase(char *str)
{
    int     i;
    i = 0;
    
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            return 1;
        else
            return 0;
    }
}
