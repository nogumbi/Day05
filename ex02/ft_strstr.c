/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 08:33:49 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 09:05:16 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

int			compare(char *x, char *y)
{
	while(*x && *y)
	{
		if(*x != *y)
		{
			return 0;
		}
		x++;
		y++;
	}
	return (*y == '\0')
}

char		*ft_strstr(char *str, char *to_find)
{
		int		i;
		i = 0;

		while(str[i] != '\0')
		{
			if((str[i] == to_find[i]) && compare(str, to_find))
			{
				return str;
			}
			str++;
		}
		return 0;
}


