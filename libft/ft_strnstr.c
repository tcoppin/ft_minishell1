/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 10:15:56 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/12 16:57:34 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)(s1));
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			k = i;
			j = 0;
			while (s1[k] == s2[j] && k < n)
			{
				k++;
				j++;
				if (s2[j] == '\0')
					return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (NULL);
}
