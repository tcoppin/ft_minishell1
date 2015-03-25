/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoppin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/19 20:32:22 by tcoppin           #+#    #+#             */
/*   Updated: 2015/02/04 23:04:10 by tcoppin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	if (ptr && size > 0)
	{
		new_ptr = (void *)malloc(size);
		ft_memcpy(new_ptr, ptr, ft_strlen(ptr));
		return (new_ptr);
	}
	return (ptr);
}
