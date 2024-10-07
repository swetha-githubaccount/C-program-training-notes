#include <stdio.h>
void dutchSort(int arr[], int n)
{
    int n0 = 0, n1=0,n2=0;
    for(int i=0;i<n ; i++)
    {
        if(arr[i]==0)
            n0 ++;
        else if(arr[i]==1)
            n1++;
        else
            n2++;
    }
    int index = 0;
    for(int i =0 ;i<n0;i++)
        printf("0 ");
    for(int i =0 ;i<n1;i++)
        printf("1 ");
    for(int i =0 ;i<n2;i++)
        printf("2 ");
}
int main()
{
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    dutchSort(arr, n);
    return 0;
}