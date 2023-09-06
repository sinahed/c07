

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *) malloc ((max - min) * sizeof (int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < (max - min))
	{
		arr[i] = (min + i);
		i++;
	}
	*range = arr;
	return (i);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range (&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
