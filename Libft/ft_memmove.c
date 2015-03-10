/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 17:25:36 by fpoggi            #+#    #+#             */
/*   Updated: 2015/02/26 17:42:30 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	if (s < d)
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
