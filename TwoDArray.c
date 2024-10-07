#include <stdio.h>

// Function to printf 2D array
void print2DArray(int row , int col, int arr[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

// Sum of 2D arrays
int sum2DArray(int row, int col, int arr[row][col])
{
    int sum = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

//
int search2DArray(int row, int col, int arr[row][col],int target)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}

//Fuction to print the transpose of 2D array
void Transpose2DArray(int row, int col, int arr[row][col])
{
    int temp[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            temp[j][i] = arr[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
    print2DArray(row, col, arr);
}
/*
void transpose(int dimen, int arr[dimen], int arr[dimen][dimen]){
        int i, j, temp;
        for(i=0; i<dimen; i++){
            (j=i+1; j<dimen; j++){
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
 */

//

//Function to perform addition of 2d array
void Addition(int row, int col, int arr[row][col],int row1,int col1,int arr1[row1][col1])
{
    int sum[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j] = arr[i][j] + arr1[i][j];
        }
    }
    printf("Sum of 2 arrays is \n");
    print2DArray(row1,col1,sum);
}

//Function to perform multiplication of two 2d arrays.
 int multiplication(int r1,int c1,int matrix1[r1][c1],int r2,int c2,int matrix2[r2][c2])
{
    if(c1!=r2) 
        return 0;
    int mul[r1][c1];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            mul[i][j] = 0;
            for(int k=0;k<c1;k++)
                mul[i][j] = matrix1[i][k] * matrix2[k][j];
        }
    }
    print2DArray(r1,c1,mul);
}


 //Union of 2 one dimmentional arrays
void print_union(int arr1[], int n1, int arr2[], int n2) {
    int union_arr[n1+n2], k = 0;
    for(int i = 0; i < n1; i++) {
        union_arr[k++] = arr1[i];
    }
    for(int i = 0; i < n2; i++) {
        int found = 0;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            union_arr[k++] = arr2[i];
        }
    }
    printf("Union: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");
}


// Intersection of two 1d array
void print_intersection(int arr1[], int n1, int arr2[], int n2) {
    printf("Intersection: ");
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

// Sum of diagonal elements of a 2d array

void diagonalSum(int r1,int c1,int arr[r1][c1])
{
    int sum = 0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if(i==j)
                sum += arr[i][j];
        }
    }
    printf("Sum of diagonal elements of the array is %d",sum);
}

// Sum of anti-diagonal elements of a 2d array / matrix
void antidiagonalSum(int r1,int c1,int matrix[r1][c1])
{
    int sum = 0;
    for(int i = 0; i < r1; i++) 
    {
        sum += matrix[i][r1-i-1];
    }
    printf("Sum of anti-diagonal elements of the array is %d",sum);
}

// Spiral traversal in the matrix



int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col]; 
        for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    }
    print2DArray(row, col, arr); 
    printf("\n");

// Sum of all the elements in 2D array
    int sum = sum2DArray(row, col, arr); 
    printf("%d",sum);
    printf("\n");
    
//
    int target;
    scanf("%d",&target);
    int s = search2DArray(row, col, arr,target); 
    if(s==1)
        printf("Found");
    else
        printf("Not found");
    return 0;

//Transpose of 2D array
    Transpose2DArray(row, col, arr); 
    printf("\n");

//Addition of 2 dimentional 2D array
    printf("\nFor 2nd array :\n");
    int row1,col1;
    scanf("%d %d", &row1, &col1);
    int arr1[row1][col1]; 
        for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
            scanf("%d", &arr1[i][j]);
    }
    Addition(row,col,arr,row1,col1,arr1);
    printf("\n");


//Multiplication of two 2d arrays
    multiplication(r1,c1,matrix1,r2,c2,matrix2);

// Union and intersection of two 1d array
int n1, n2;
    scanf("%d", &n1);
    
    int arr1[n1] ;
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int  arr2[n2];
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    print_union(arr1, n1, arr2, n2);
    print_intersection(arr1, n1, arr2, n2);
    printf("\n");

//Sum of diagonal elements of a 2d array
    diagonalSum(row, col, arr);

//Sum of anti-diagonal elements of a 2d array
    antidiagonalSum(row, col, arr);

// Spiral traversal in the matrix



    return 0;
}
