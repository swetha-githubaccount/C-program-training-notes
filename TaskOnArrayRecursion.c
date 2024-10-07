#include <stdio.h>

//Minimum element of an array
int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return (arr[n-1] < findMin(arr, n-1)) ? arr[n-1] : findMin(arr, n-1);
}

//Recursive function for finding maximum element of an array.
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    return (arr[n-1] > findMax(arr, n-1)) ? arr[n-1] : findMax(arr, n-1);
}

//Recursive function for SUM Triangle from the triangle
void printSumTriangle(int arr[], int n) {
    if (n < 1)
        return;

    int temp[n-1];
    for (int i = 0; i < n-1; i++) {
        temp[i] = arr[i] + arr[i+1];
    }

    printSumTriangle(temp, n-1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//


int main() {

// To find minimum and maximum element of an array.
    int arr[] = {12, 3, 45, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum element: %d\n", findMin(arr, n));
    printf("Maximum element: %d\n", findMax(arr, n));

//SUM Triangle from the triangle
    printSumTriangle(arr, n);
    printf("\n");

//


    return 0;
}
