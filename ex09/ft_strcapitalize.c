#include<unistd.h>
#include<stdio.h>

char	toUp(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (c - ('a' - 'A'));
}

char    toLow(char c)
{
        if (c >= 'A' && c <= 'Z')
                return (c + ('a' - 'A'));
        else
                return (c);
}

int	notChNb(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (i == 0)
				str[i] = toUp(str[i]);
			else
			{
				if (!notChNb(str[i - 1]))
					str[i] = toUp(str[i]);
				else
					str[i] = toLow(str[i]);
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	puts(s);
	puts(ft_strcapitalize(s));
	return (0);
}
