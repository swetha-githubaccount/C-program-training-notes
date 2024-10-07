
#include <stdio.h>

//Example for using of function pointer to printer the elements in the array.
void printArray(int arr[] , int size)
{
    int i;
    for( i=0;i<size;i++)
        printf("%d ",arr[i]);
}
int main()
{
    void(*p)(int[] , int) = &printArray;  // assigns the code reference to pointer.
    int arr[] = {1,2,3,4,5};
    int n = 5;
    (*p)(arr,n); // function calling

    return 0;
}