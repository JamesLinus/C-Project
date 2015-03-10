/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 13:25:50 by fpoggi            #+#    #+#             */
/*   Updated: 2015/02/24 13:34:26 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	char	*pdst;
	char	*psrc;
	size_t	dlen;

	n = size;
	pdst = dst;
	psrc = (char *)src;
	while (n-- != 0 && *pdst != '\0')
		pdst++;
	dlen = pdst - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(psrc));
	while (*psrc)
	{
		if (n != 1)
		{
			*pdst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*pdst = '\0';
	return (dlen + (psrc - src));
}
