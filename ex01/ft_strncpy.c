#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char s1[10] = "Danila";
	char s2[20] = "Voznilka";
	ft_strncpy(s1, s2, 10);
	//strncpy(s1, s2, 10);
	puts(s1);
	return(0);
}
