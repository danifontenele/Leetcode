#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int size) 
{
	char *prefix;
    int i;
    int j;

	if (size < 1)
		return (strdup(""));
	if (size == 1)
		return (strs[0]);
	prefix = calloc((strlen(strs[0]) + 1), sizeof(char));
	if (!prefix)
		return (NULL);
	prefix = strdup(strs[0]);
    i = 1;
	j = 0;
	while (i < size)
    {
        j = 0;
        while (prefix[j] && strs[0][j] && strs[i][j])
        {
			if (strs[0][j] != strs[i][j])
				break;
			prefix[j] = strs[0][j];
            j++;
        }
		prefix[j] = '\0';
        i++;
    }
    return (prefix);
}