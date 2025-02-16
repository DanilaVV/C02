#include<unistd.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[20] = "Danila1239";
	puts(s);
	puts(ft_strupcase(s));
	return (0);
}
