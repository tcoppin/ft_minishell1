/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:20:26 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/10 16:35:12 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)(s1));
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			k = i;
			j = 0;
			while (s1[k] == s2[j])
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
