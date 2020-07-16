/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:42:54 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/16 09:57:55 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while(s1 && (s1 == s2))
	{
		s1 += 1;
		s2 += 2;
	}
	return(s1 - s2);
}
