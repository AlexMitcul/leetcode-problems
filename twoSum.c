/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int *result;
    int i;
    int j;
    
    i = 0;
    while (i < numsSize)
    {
        j = 0;
        while (j < numsSize)
        {
            if (j == i)
                j++;
            if (nums[i] + nums[j] == target)
            {
                result = (int*)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                return (result);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}
