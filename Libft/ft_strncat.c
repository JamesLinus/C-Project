/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 16:01:13 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 22:23:53 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const	char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ps1;
	char	*ps2;
	
	i = 0;
	j = 0;
	ps1 = s1;
	ps2 = (char *)s2;
	if (!*s1)
		return (ps2);
	if (!*s2)
		return (ps1);
	while (*s1)
		s1++;
	while (j < n)
		s1[i++] = s2[j++];
	return (ps1);
}
