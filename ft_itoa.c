#include "libft.h"
int ft_count(int n)
{
	int i;
	
	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
char *ft_itoa(int n)
{
	char *dst;
	size_t len;
	unsigned int nb;;

	nb = n;
	len = ft_count(n);
	if (n < 0)
	{	
		len = len + 1;
		nb = -nb;
	}
	
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (len--)
	{
		dst[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)	
		dst[0] = '-';
	return (dst);
}
