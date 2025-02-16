#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if ((c >= 32) && (c <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable("fshgdfhvc"));
	printf("%d\n", ft_str_is_printable("DSDSF"));
	printf("%d\n", ft_str_is_printable(""));
}
