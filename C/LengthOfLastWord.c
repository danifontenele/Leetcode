#include <stdio.h>

int my_strlen(char *str)
{
    int len;

	len = 0;
    while (str[len])
        len++;
    return (len);
}

int lengthOfLastWord(char* s) 
{
    int start;
    int end;

    end = my_strlen(s) - 1;
    while (s[end] == ' ')
        end--;
    start = end;
    while (s[start] != ' ' && start > 0)
        start--;
	if (start == 0 && s[start] != ' ')
		end++;
	if (start == end)
		return (1);
    return (end - start);
}

/* int main(void)
{
	char *s = " night   ";
	int	re;

	re = lengthOfLastWord(s);
	printf("%d\n", re);
} */