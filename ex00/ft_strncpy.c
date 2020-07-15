/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:25:41 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/15 13:33:21 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void 		ft_putchar(char c);

char 		*ft_strncpy(char *dest, char *arc, unsigned int n)
{
	n = 0;
	while(arc[i] != '\0')
	{
		dest[i] = arc[i];
		i++;
	}
	return dest;
}

