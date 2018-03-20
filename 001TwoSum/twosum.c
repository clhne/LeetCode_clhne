#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/**
 * User:CLHne
 * Date:3/20/2018
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int *result = (int *)malloc(2 * sizeof(int));
    for (i = 0; i < numsSize; i++){
        for(j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                result[0] = i + 1;
                result[1] = j + 1;
                //return result;
                printf("[%d, %d]\n",result[0],result[1]);
            }
        }
    }
    //return 0;
}
int main()
{
    int nums[] = {1,7,12,6};
    twoSum(nums,4,7);
    
    return 0;
}