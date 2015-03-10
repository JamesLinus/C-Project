/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 13:47:59 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 22:24:21 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cr;

	str = (char *)s;
	cr = (char)c;
	while (*str)
	{
		str++;
		if (*str == cr)
			return (str);
	}
	return (str);
}
