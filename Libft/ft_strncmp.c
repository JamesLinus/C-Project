
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}
