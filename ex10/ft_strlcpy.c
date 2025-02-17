#include<unistd.h>
#include<stdio.h>
#include<string.h>

unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	char	dest[100] = "Danila";
	char	src[100] = "Vozn";
	int		n;

	//n = strlcpy(dest, src, 100);
	n = ft_strlcpy(dest, src, 100);
	puts(dest);
	printf("%d",n);
	return(0);
}
