#include <stdio.h>
#include <stdlib.h>

int *two_sun(int *nums, int nums_size, int target, int *return_size)
{
    int i = 0;
    int j = 0;
    int sum = 0;
    int *result = malloc(sizeof(int) * 2);
    while (i < nums_size)
    {
        j = i + 1;
        while(j < nums_size)
        {
            sum = nums[i] + nums[j];
            if (sum == target)
            {
                result[0] = i;
                result[1] = j;
                *return_size = 2;
                return result;
            }
            j++;
        }
        i++;
    }
    *return_size = 0;
    return (NULL);
}

int main(void)
{
    int tab[5] = {0,5,8,9,1};
    int rsize;
    int *test = two_sun(tab, 5, 17, &rsize);
    printf("[%d, %d]\n", test[0], test[1]);
    return (0);
    for (int i = 0; i < rsize; i++)
    {
        if (i != 0)
            printf(", ");
        printf("%d", test[i]);
    }
    printf("]\n");
    return (0);
}