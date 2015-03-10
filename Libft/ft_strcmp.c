/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/23 17:09:36 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/10 22:28:19 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((*str1 != 0) && (*str2 != 0))
	{
		str1++;
		str2++;
		if (*str1 < *str2)
			return (-1);
		if (*str1 == *str2)
			return (0);
		else
			return (1);
	}
	return (0);
}
