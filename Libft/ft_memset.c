
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tmp;

	if (b == NULL)
		return (NULL);
	tmp = (char *) b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (char) c;
		i++;
	}
	return (b);
}
