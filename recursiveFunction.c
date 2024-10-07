#include<stdio.h>

// Factorial
int factorial(int n)
{
    if(n==1 || n==0) return 1;
    return n * factorial(n-1);
}

//
int power(int b , int e)
{
    if(b==0) return 1;
    return b * pow(b,e-1);
}

//Fibonacci sequence 
    int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

//Sum of all the elements in the array
    int sumOfArrayElements(int n, int arr[]) {
        if (n <= 0) 
            return 0;
        return arr[n - 1] + sumOfArrayElements(n - 1, arr);
}

//Function to Solve pattern using recursive function
    void printStars(int numStars) {
    if (numStars == 0) 
        return;
    
    printf("*");
    printStars(numStars - 1);
}
    //TO PRINT RIGHT TRIANGLE PATTERN USING RECURSION
#include <stdio.h>
#include<string.h>


void rightTriangle(int n)
{
    if(n==0) return;
    rightTriangle(n-1);
    for(int i=0; i<n;i++)
    {
        printf("* ");
    }
    printf("\n");
}


//



int main()
{
    int n;
    scanf("%d",&n);

// factorial
    printf("Factorial of %d is %d",n, factorial(n));

//
    int base , exp;
    scanf("%d %d",&base , &exp);
    printf("Power value is %d",power(base , exp));

//Fibonacci sequence 
    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

//Sum of all the elements in the array
    nt arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = sumOfArrayElements(n, arr);
    printf("Sum of array elements: %d\n", sum);

// Solve pattern -right triangle using recursive function
    rightTriangle(6);;

//

    return 0;
}