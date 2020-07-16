/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:33:23 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 08:27:23 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void 		ft_putchar(char c);

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

