/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:16:37 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 13:17:20 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<string.h>

char		*ft_strcapi(char *str)
{
	int		i;
	i = 0;

	while(str[i])
	{
	    while(i == 0)
	    {
    		if(str[i] >= 'a' &&  str[i] <= 'z' )
    		{
    			str[i] = (str[i] - 32);
    			i++;
    		}
	    }
	    if(str[i] == ' ')
	    {
            i++;
	        
	        if(str[i] >= 'a' &&  str[i] <= 'z' )
    		{
    			str[i] = (str[i] - 32);
    		} 
	    }
	    else
	    {
	        if(str[i] >= 'A' &&  str[i] <= 'Z' )
    		{
    			str[i] = (str[i] + 32);
    		}
	    }
	   i++;
	}
	return str;
}
