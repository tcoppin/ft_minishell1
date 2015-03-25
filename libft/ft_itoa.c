/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 12:15:03 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/18 17:55:29 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cntdigit(int nb)
{
	int rtn;

	rtn = 0;
	if (nb < 0)
		rtn = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		rtn++;
	}
	return (rtn);
}

static int	ft_checkneg(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

char		*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*rsl;

	i = ft_cntdigit(n);
	if (n == 0)
		i++;
	if ((rsl = (char *)malloc(sizeof(rsl) * (i + 1))))
	{
		rsl[0] = '0';
		if (n < 0)
		{
			rsl[0] = '-';
			n *= -1;
		}
		j = 1;
		while (n != 0)
		{
			rsl[i - j] = '0' + ft_checkneg(n % 10);
			n = n / 10;
			j++;
		}
		rsl[i] = '\0';
	}
	return (rsl);
}
