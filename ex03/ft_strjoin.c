#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count ++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	sizearrstr(int size, char **strs)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (size <= 0)
		count = 1;
	while (i < size)
	{
		count *= ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joinsts;
	int		i;

	i = 0;
	joinsts = (char *) malloc ((sizearrstr(size, strs)
				+ ft_strlen(sep)) * sizeof (char));
	if (size == 0)
	{
		joinsts = NULL;
		free(joinsts);
	}
	while (i < size)
	{
		ft_strcat(joinsts, strs[i]);
		if (i != size - 1)
			ft_strcat(joinsts, sep);
		i++;
	}
	joinsts[ft_strlen(joinsts)] = '\0';
	return (joinsts);
}

int	main(void)
{
	char	*tab[4];

	tab[0] = "1111";
	tab[1] = "2222";
	tab[2] = "3333";
	tab[3] = "4444";
	printf("%s", ft_strjoin(4, tab, ","));
	return (0);
}
