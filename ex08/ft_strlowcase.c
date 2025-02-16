#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[20] = "Danila1239";
	puts(s);
	puts(ft_strlowcase(s));
	return (0);
}
