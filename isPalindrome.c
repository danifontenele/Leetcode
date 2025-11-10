#include <stdio.h>
#include <stdbool.h>

int ft_intlen(int x)
{
    int len;

    len = 0;
    while (x != 0)
    {
        x = x/10;
        len++;
    }
    return (len);
}

bool isPalindrome(int x) 
{
    char *nbr;
    int nblen, i;

    if (x == 0)
        return (true);
	if (x < 0)
		return (false);
    if (x > 0)
    {
		nblen = ft_intlen(x);
		nbr = malloc(sizeof(char) * (nblen + 1));
		if (!nbr)
			return (false);
		i = nblen;
		while (i > 0)
		{
			nbr[i] = x % 10 + 48;
			x = x / 10;
			i--;
		}
		nbr[nblen] = '\0';
		i = 0;
		while (i != nblen/2)
		{
			if (nbr[i] != nbr[nblen - 1 - i])
				return (false);
			i++;
		}
	}
	free (nbr);
	if (i == nblen/2)
		return (true);
}
