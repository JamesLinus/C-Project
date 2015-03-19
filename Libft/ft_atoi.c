/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpoggi <fpoggi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:36:59 by fpoggi            #+#    #+#             */
/*   Updated: 2015/03/18 19:37:43 by fpoggi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		ret;
	char	si;

	ret = 0;
	si = 1;
	while (*str == ' ' || *str == '\t' || *str == '\r'
			|| *str == '\v' || *str == '\n' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		si = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		ret = ret * 10 + si * (*str - '0');
		str++;
	}
	return (ret);
}

int	main()
{
	char s[10] = "a";
	int	res = atoi(s);

	printf("%d\n", s);
}
