/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 10:40:25 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/14 12:36:20 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*rtn;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (s)
	{
		if ((rtn = (char *)malloc(len + 1)))
		{
			while ((int)len > 0)
			{
				rtn[j] = s[i];
				i++;
				j++;
				len--;
			}
			rtn[j] = '\0';
			return (rtn);
		}
	}
	return (NULL);
}
