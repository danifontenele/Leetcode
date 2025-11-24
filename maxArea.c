#include <stdio.h>

int maxArea(int *height, int len)
{
	int	max, a = 0;
	int	left = 0;
	int	right = len - 1;
	int	dist;

	while (left < right)
	{
		dist = right - left;
		if (height[left] <= height[right])
			a = height[left] * dist;
		else if (height[left] > height[right])
			a = height[right] * dist;
		if (a > max)
			max = a;
		if (height[left] < height[right])
			left++;
		else
			right--;
	}
	return (max);
}
