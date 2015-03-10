/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 14:30:52 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 22:25:42 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	char	*ps;
	char	car;

	car = (char)c;
	ps = (char *)s;
	ch = NULL;
	while (*ps)
	{
		if (*ps == car)
		{
			ch = ps;
		}
		ps++;
	}
	if (!*ch)
		return (NULL);
	else
		return (ch);
}
