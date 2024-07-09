#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc != 3)
	{
		write (1, "Necesitamos x e y\n", 16);
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	rush(x, y);
	return (0);
}

