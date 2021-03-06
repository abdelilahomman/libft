/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:36:07 by aomman            #+#    #+#             */
/*   Updated: 2021/11/12 19:20:04 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return (s + i);
		}
		i--;
	}
	return (0);
}
