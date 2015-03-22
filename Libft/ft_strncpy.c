
#include "libft.h"

char            *ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		flags;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	flags = 0;
	while (i < n)
	{
		if (s2[i] == '\0')
			flags = 1;
		if (flags)
			s1[i] = 0;
		else
			s1[i] = s2[i];
		i++;
	}
	return (s1);
}
