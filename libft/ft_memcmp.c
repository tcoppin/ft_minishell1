/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 10:35:05 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/18 18:08:23 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char	*s3;
	unsigned char	*s4;

	if (s1 && s2)
	{
		s3 = (unsigned char *)s1;
		s4 = (unsigned char *)s2;
		while ((int)n > 0)
		{
			if (*s3 != *s4)
				return (*s3 - *s4);
			else
			{
				s3++;
				s4++;
			}
			n--;
		}
	}
	return (0);
}
