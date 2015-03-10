/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 10:42:32 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 17:55:36 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	char			*pb;
	unsigned char	car;

	pb = b;
	car = (unsigned char)c;
	while (len--)
	{
		*pb++ = car;
	}
	return (b);
}
