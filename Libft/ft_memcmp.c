/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/24 13:58:20 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 22:17:25 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (n--)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		else
		{
			ps1++;
			ps2++;
		}
	}
	return (0);
}
