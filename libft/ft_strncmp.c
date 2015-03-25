/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 09:55:55 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/21 18:53:38 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (ft_isascii(*s1) == 0)
		return (1);
	if (ft_isascii(*s2) == 0)
		return (-1);
	while ((int)n > 0)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return (*s1 - *s2);
		if (!*s1 || !*s2)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
