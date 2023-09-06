

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *) malloc ((max - min) * sizeof (int));
	if (min >= max)
		return (NULL);
	while (i < (max - min))
	{
		arr[i] = (min + i);
		i++;
	}
	return (arr);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 10;
	max = 20;
	size = max - min;
	tab = ft_range (min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
