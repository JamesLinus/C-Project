/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/22 15:45:36 by fpoggi            #+#    #+#             */
/*   Updated: 2015/02/22 16:13:14 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const	char *s2)
{
	size_t	i;
	char	*ps1;
	char	*ps2;

	ps1 = s1;
	ps2 = (char *)s2;
	i = 0;
	if (!*s1)
		return (ps2);
	if (!*s2)
		return (s1);
	while (*s1)
		s1++;
	while (*s2)
		s1[i++] = *s2++;
	return (ps1);
}
