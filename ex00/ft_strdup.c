

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!(new))
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

int	main(int argc, char *argv[])
{
	char	*aaaa;
	char	*bbbb;

	if (argc == 2)
	{
		aaaa = ft_strdup(argv[1]);
		bbbb = strdup(argv[1]);
		printf("%s\n%s", aaaa, bbbb);
	}
	return (0);
}