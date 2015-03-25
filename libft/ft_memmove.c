/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 10:19:17 by tcoppin           #+#    #+#             */
/*   Updated: 2014/11/16 01:44:40 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	void *temp;

	temp = (void *)malloc(sizeof(src) * len);
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	ft_memdel(&temp);
	return (dst);
}
