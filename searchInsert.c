#include <stdio.h>

int searchInsert(int *nums, int size, int target)
{
    int i = 0;

    while (i < size)
    {
        if (target <= nums[i])
            return (i);
        i++;
    }
    if (i == size)
        return (size);
    return (-1);
}

/* int main(void)
{
    int nums[] = {1, 3, 5, 6};
    int size = 4;
    int target = 7;

    int pos = searchInsert(nums, size, target);
    printf("position: %d\n", pos);
} */