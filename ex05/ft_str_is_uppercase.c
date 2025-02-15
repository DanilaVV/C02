#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if ((c >= 'A') && (c <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("fshgdfhvc"));
	printf("%d\n", ft_str_is_uppercase("DSDSF"));
	printf("%d\n", ft_str_is_uppercase(""));
}
