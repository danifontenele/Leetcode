#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *answer;
    int i;
    int j;

    answer = malloc(sizeof(int) * (*returnSize));
    i = 0;
    while (i < numsSize)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
			{
				answer[0] = i;
				answer[1] = j;
				return (answer);
			}
            j++;
        }
        i++;
    }
    *returnSize = 0;
    return(NULL);
}

/* int main(void)
{
    int nums[] = {3, 3};
    int numsSize = 2; // in the leet code main tester they dont send the addres of numsSize.
    int target = 6;
    int returnSize = 2;
	int *answer;

    answer = twoSum(nums, numsSize, target, &returnSize); 

	printf("[%d, %d]\n", answer[0], answer[1]);
} */