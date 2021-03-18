#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *tab;
	size_t i;
	
	i = 0;
	if (!s)
		return (NULL);
	tab = (char *)malloc(sizeof(char) * len + 1);
	if (!tab)
		return (NULL);
	while (i < len && ft_strlen(s) > start)
	{
		tab[i] = s[start];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}
