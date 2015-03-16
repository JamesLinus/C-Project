/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 16:01:13 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/16 14:29:57 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ps1;
	size_t	lens1;

	lens1 = ft_strlen(s1);
	ps1 = s1;
	while (n--)
	{
		s1[lens1] = *s2++;
		lens1++;
	}
	s1 = NULL;
	return (ps1);
}
