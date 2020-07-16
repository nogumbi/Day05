/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:33:23 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 09:39:34 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

char 		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	i = 0;
	while((i < n) && src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	while(i < n)
	{
		dest[i++] = '\0';
	}
	return dest;
}

