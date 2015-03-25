/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 10:15:51 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/14 10:26:17 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*rtn;

	i = 0;
	if (s && f)
	{
		rtn = (char *)ft_memalloc(sizeof(s));
		while (s[i])
		{
			rtn[i] = (*f)(i, s[i]);
			i++;
		}
		return (rtn);
	}
	return (NULL);
}
