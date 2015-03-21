
#include "libft.h"

char    *ft_strstr(const char *s1, const char *s2)
{
	int     s1_i;
	int     s2_i;
	int		pos;

	if (s1 == NULL || s2 == NULL ||
			(ft_strlen(s1) < ft_strlen(s2)))
		return (NULL);
	else if (s2[0] == '\0')
		return ((char*)s1);
	s1_i = 0;
	while (s1[pos = s1_i] != '\0')
	{
		s2_i = 0;
		if (s2[s2_i] == s1[s1_i])
		{
			while (s2[s2_i++] == s1[s1_i++])
			{
				if (s1[s1_i] == '\0' || s2[s2_i] == '\0')
					return ((char*)&s1[pos]);
			}
		}
		else
			s1_i++;
	}
	return (0);
}
