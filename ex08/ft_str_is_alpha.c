/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:33:08 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 14:07:07 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<string.h>

#include <unistd.h>
#include<stdio.h>
#include<string.h>

int     ft_str_is_alpha(char *str)
{
    int     i;
    i = 0;

    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z'  ) || (str[i] >= 'A' && str[i] <= 'Z'))
            return 1;
        else
            return 0;

    
}
