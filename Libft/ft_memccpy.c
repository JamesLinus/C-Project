/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 17:47:25 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 17:58:38 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*d;
	char			*s;
	unsigned char	cr;

	d = dst;
	s = (char *)src;
	cr = (unsigned char)c;
	while (n--)
	{
		if ((*d++ = *s++) == cr)
			return (d);
	}
	return (NULL);
}
