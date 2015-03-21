#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	signep;
	int	signem;

	signep = '+';
	signem = '-';
	res = 0;
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
	{	
		str++;
		res = 10 * res + *str - '0';
	}
	return (res);
}
