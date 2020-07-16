/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:38:46 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 14:52:47 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<string.h>

int     ft_str_is_printable(char *str)
{
    int     i;
    i = 0;
    
    while(str[i])
    {
        if(str[i] >= 32 && str[i] <= 127)
            return 1;
        else
            return 0;
    }
}
