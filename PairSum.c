#include <stdio.h>

int pairSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
                return 1;
        }
    }
    return 0;
}

int sortedPairSum(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == target)
            return 1;
        else if (arr[low] + arr[high] > target)
            high--;
        else
            low++;
    }
    return 0;
}

int main()
{
    int n, target;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    int op1 = pairSum(arr, n, target);
    int op2 = sortedPairSum(arr, n, target);
    if(op2 == 1)
        printf("Target sum achieved");
    else
        printf("Target sum is not found");
    return 0;
}
