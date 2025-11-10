#include <stdio.h>

int romanToInt(char* s) 
{
    int i;
    int nbr;
	int j;

    nbr = 0;
    i = 0;
	while (s[i])
    {
		j = 0;
		if (s[i] == 'M')
			nbr += 1000;
		if (s[i] == 'D')
			nbr += 500;
		if (s[i] == 'C') // evito que confunda com o C de CM(900) ou CD(400)
		{
			if (s[i + 1] == 'M')
			{	
				nbr += 900;
				j = 1;
			}
			else if (s[i + 1] == 'D')
			{
				nbr += 400;
				j = 1;
			}
			else
				nbr += 100;
		}
		if (s[i] == 'L')
			nbr += 50;
		if (s[i] == 'X' ) // evito que confunda com X de XL(40) ou XC(90)
		{
			if (s[i + 1] == 'L')
			{	
				nbr += 40;
				j = 1;
			}
			else if (s[i + 1] == 'C')
			{	
				nbr += 90;
				j = 1;
			}
			else
				nbr += 10;
		}	
		if (s[i] == 'V')
			nbr += 5;
		if (s[i] == 'I') // evito que confunda com I de IV(5) ou IX(9)
		{
			if (s[i + 1] == 'X')
			{	
				nbr += 9;
				j = 1;
			}
			else if (s[i + 1] == 'V')
			{
				nbr += 4;
				j = 1;
			}
			else
				nbr += 1;
		}
		if (j == 1)
			i++;
		i++;
	}
	return (nbr);
}

/* int main(void)
{
	printf("III: %d\n", romanToInt("III")); // 3
	printf("LVIII: %d\n", romanToInt("LVIII")); // 58
	printf("MCMXCIV: %d\n", romanToInt("MCMXCIV")); // 1994
	printf("CMXCIX: %d\n", romanToInt("CMXCIX")); //999
	printf("MM: %d\n", romanToInt("MM")); // 2000
	printf("MMMXLV: %d\n", romanToInt("MMMXLV")); // 3045 
} */