/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aomman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:44:04 by aomman            #+#    #+#             */
/*   Updated: 2021/11/19 18:32:23 by aomman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*_s;
	size_t	i;

	_s = (char *) s;
	i = 0;
	while (i < n)
	{
		_s[i] = 0;
		i++;
	}
}