/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:05:22 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/05 12:09:59 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ispunct(int c)
{
	int rsl;

	rsl = ft_isprint(c);
	if (c == 32 || ft_isalnum(c) == 1)
		rsl = 0;
	return (rsl);
}
