
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	tmp = (char*) s;
	i = 0;
	if (n == '0')
		return ;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
	return ;
}
