#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[10] = "Danila";
	char	s2[5] = "Vozn";
	//puts(strcpy(s2,s1));
	puts(ft_strcpy(s2, s1));
	return(0);
}
