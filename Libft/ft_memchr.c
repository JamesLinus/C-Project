/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 16:03:25 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 22:14:05 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ps;
	unsigned char cr;

	cr = (unsigned char)c;
	ps = (unsigned char *)s;
	while (n--)
	{
		if (*ps != cr)
			ps++;
		else
			return (ps);
	}
	return (0);
}
