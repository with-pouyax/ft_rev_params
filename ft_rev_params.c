#include <unistd.h>

int	main(int argc, char **argv)
{
	int	max;
	int	i;

	max = argc - 1;
	if (argc > 1)
	{
		while (max > 0)
		{
			i = 0;
			while (argv[max][i] != '\0')
			{
				write(1, &argv[max][i], 1);
				i++;
			}
			write(1, "\n", 1);
			max--;
		}
	}
}
