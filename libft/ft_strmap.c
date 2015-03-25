/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 16:48:28 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/19 03:37:23 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*rtn;

	i = 0;
	if (s && f)
	{
		if ((rtn = (char *)ft_memalloc(sizeof(s))))
		{
			while (s[i])
			{
				rtn[i] = (*f)(s[i]);
				i++;
			}
		}
		return (rtn);
	}
	return (NULL);
}
