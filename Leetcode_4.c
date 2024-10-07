#include <stdio.h>

void MedianOfTwoSortedArray(int arr1[], int arr2[], int l1, int l2)
{
    int median;
    int l3 = l1 + l2;
    int arr3[l3]; 
    int i = 0, j = 0, k = 0;
    while (k < l3)
    {
        if (i < l1 && j < l2)
        {
            if (arr1[i] > arr2[j])
            {
                arr3[k++] = arr2[j++];
            }
            else
            {
                arr3[k++] = arr1[i++];
            }
        }
        else if (i < l1)
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    int mid = l3 / 2;
    if (l3 % 2 == 1)
    {
        median = arr3[mid];
    }
    else
    {
        median = (arr3[mid] + arr3[mid - 1]) / 2;
    }

    printf("Median of the sorted arrays is %d\n", median);
}

int main()
{
    int arr1[] = {1, 2, 5, 8, 12};
    int arr2[] = {3, 6, 10, 20, 25};
    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);

    MedianOfTwoSortedArray(arr1, arr2, l1, l2);
    
    return 0;
}
