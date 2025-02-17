#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int n)
{
	if (n < 10)
		ft_putchar('0' + n);
	else if (n < 16)
		ft_putchar('a' + (n - 10));
	else
	{
		ft_puthex(n / 16);
		ft_puthex(n % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_puthex(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
