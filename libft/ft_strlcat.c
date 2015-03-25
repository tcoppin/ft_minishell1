/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:59:22 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/13 16:38:40 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_concat(char const *s, char *d, int size)
{
	while (*s)
	{
		if (size != 1)
		{
			*d = *s;
			d++;
			size--;
		}
		s++;
	}
	*d = '\0';
}

size_t			ft_strlcat(char *dst, char const *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		size;

	d = dst;
	s = src;
	size = n;
	while (size && *d)
	{
		d++;
		size--;
	}
	len = d - dst;
	size = n - len;
	if (!size)
		return (len + ft_strlen(src));
	ft_concat(s, d, size);
	return (len + ft_strlen(src));
}
