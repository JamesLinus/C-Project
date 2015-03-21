#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	if (s1 == NULL)
		return (NULL);
	res = (char *) malloc(sizeof(s1));
	ft_strcpy(res, s1);
	return (res);
}
