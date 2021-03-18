#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && *haystack + i && i < len)
	{
		if (*(haystack + i)  == *needle)
		{
			while ((*(haystack + i + j) == *(needle + j))  && (i + j) < len )  
			{	
				j++;
				if (!*(needle + j))
					return ((char *)(haystack + i));
			}
		}
		i++;
	}
	return (NULL);
}
