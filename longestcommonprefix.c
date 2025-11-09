#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) 
{
    char *prefix;
    int i;
    int j;

    i = 1;
    while (i < strsSize)
    {
        j = 0;
        while (strs[0][j] && strs[i][j])
        {
            if (strs[0][j] != strs[i][j])
            {
				strs[0][j] = '\0';
				break;
            }
            j++;
        }
        i++;
    }
	prefix = malloc(sizeof(char) * (j + 1));
	if (!prefix)
		return (NULL);
	i = 0;
	while(i < j)
	{
		prefix[i] = 
	}

	return (prefix);
}

int main(void)
{
	char *strs[] = {"flower", "flow", "flight"};
	char *prefix;
	prefix = longestCommonPrefix(strs, 3);
	printf("%s\n", prefix);
}