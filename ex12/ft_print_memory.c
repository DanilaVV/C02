#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 32 && s[i] <= 126)
			ft_putchar(s[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	ft_puthex(unsigned int n)
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

void	ft_print_address(int n)
{
	int		i;
	int		j;

	i = n;
	j = 15;
	while (i /= 16)
		j--;
	while (j--)
		ft_putchar('0');
	ft_puthex(n);
	ft_putchar(':');
	ft_putchar(' ');
}

int	main(void)
{
	char	st[100] = "Coucou\ntu vas bien ?";
	return (0);
}
