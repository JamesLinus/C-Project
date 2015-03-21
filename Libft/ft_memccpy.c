
#include "libft.h"

void        *ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t		i;
	char		*cs1;
	const char	*cs2;

	cs1 = (char*) s1;
	cs2 = (char*) s2;
	i = 0;
	while (i < n)
	{
		cs1[i] = cs2[i];
		if (cs2[i] == c)
			return ((void*) &cs1[i + 1]);
		i++;
	}
	return (NULL);
}
