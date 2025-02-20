#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *s, int i0, int iend)
{
	int	i;
	int	j;

	i = i0;
	j = 0;
	if (iend - i0 != 16)
		while (j < 16 + i0 -iend)
		{
			ft_putchar(' ');
			j++;
		}
	while (s[i] && i < iend)
	{
		if (s[i] >= 32 && s[i] <= 126)
			ft_putchar(s[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('\n');
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		j;
	char	*st;

	i = 0;
	st = (char *)addr;
	while (st[i] && i < size)
	{
		if (i % 16 == 0)
		{
			ft_print_address(i);
			j = i;
		}
		if (st[i] < 16)
			ft_putchar('0');
		ft_puthex(st[i]);
		if (i % 2 > 0 || !st[i + 1] || i + 1 == size)
			ft_putchar(' ');
		i++;
		if (i % 16 == 0 || !st[i] || i == size)
			ft_putstring(st, j, i);
	}
	return (addr);
}

int	main(void)
{
	char	st[100] = "Bonjour les amin ches\n\t\nc est fo u.tout\nce qu on peut faire avec.\n\nprint_memory..\n\tlol.lol. \n";
	ft_print_memory(st,100);
	return (0);
}
