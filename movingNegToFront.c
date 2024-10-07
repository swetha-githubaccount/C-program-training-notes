#include <stdio.h>

int main()
{
    int arr[] = {5, 11, -3, 7, 8, -2, -5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int l = 0, h = n - 1; 
    
    while(l < h)
    {
        if(arr[l] < 0 && arr[h] < 0)
            l++;
        else if(arr[l] > 0 && arr[h] < 0)
        {
            int temp = arr[h];
            arr[h] = arr[l];
            arr[l] = temp;
            l++;
            h--;
        }
        else if(arr[l] < 0 && arr[h] > 0)
        {
            l++;
            h--;
        }
        else
        {
            h--;
        }
    }
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
