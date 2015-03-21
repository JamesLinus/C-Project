
#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char    *tmp_dst;
    char    *tmp_src;
    int     i;

	if (dst == NULL || src == NULL)
		return (NULL);
    tmp_dst = dst;
    tmp_src = (char *)src;
    i = 0;
    while (tmp_src[i] != '\0')
    {
        tmp_dst[i] = tmp_src[i];
        i++;
    }
    tmp_dst[i] = '\0';
    return (dst);
}
