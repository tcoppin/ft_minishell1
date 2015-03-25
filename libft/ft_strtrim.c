/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:14:49 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/14 15:45:58 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*rtn;
	int		i;
	int		lens;

	i = 0;
	if (s)
	{
		lens = ft_strlen(s) - 1;
		while (ft_isalnum(s[i]) == 0 && i <= lens)
			i++;
		while (ft_isspace(s[lens]) != 0 && lens >= i)
			lens--;
		if ((rtn = (char *)malloc(lens - i + 1)))
		{
			ft_strclr(rtn);
			ft_strncpy(rtn, (s + i), (lens - i + 1));
			return (rtn);
		}
	}
	return (NULL);
}
