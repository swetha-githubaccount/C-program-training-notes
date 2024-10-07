#include <stdio.h>


//Write a program to print a right-angled triangle pattern.
void rightTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}

//Write a program to print an inverted right-angled triangle pattern.
void InvertedRightTriangle(int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}

//Write a program to print an equilateral triangle pattern
void equiTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int s=0;s<n-i-1;s++)
                printf(" ");
        for(int j=0;j<=i;j++)
                printf("* ");
        printf("\n");
    }
}

//Write a program to print a diamond pattern.
void solidDiamond(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int s=1; s<=n-i;s++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
            printf("*");
         printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int s=1;s<=n-i;s++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
}

//Write a program to print an hourglass pattern.
void leftHalfHourGlass(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int s=1; s<=n-i;s++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");
         printf("\n");
    }
    for(int i=2;i<=n;i++)
    {
        for(int s=1;s<=n-i;s++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}

int binomialCoefficient(int i,int j)
{
    if(j==0||j==i)
        return 1;
    return binomialCoefficient(i-1,j-1) + binomialCoefficient(i-1,j);
}

// Write a program to print Pascal's triangle pattern
void pascalTriangle(int n)
{
    int i,j;
    if(n<=0)
        return;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ",binomialCoefficient(i,j));
        printf("\n");
    }
}

//Write a program to print a hollow square pattern.
void HollowSquare(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 ||j==n || i==1 || i==n )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main()
{
    int n ;
    scanf("%d",&n);

    //to print a right-angled triangle pattern.
    printf("\n");
    rightTriangle(n);
    printf("\n");

    //to print an inverted right-angled triangle pattern.
    printf("\n");
    InvertedRightTriangle(n);
    printf("\n");

//to print an equilateral triangle pattern
    printf("\n");
    equiTriangle(n);
    printf("\n");

//to print a diamond pattern.
    printf("\n");
    solidDiamond(n);
    printf("\n");

//to print an hourglass pattern.
    printf("\n");
    leftHalfHourGlass(n);
    printf("\n");

//to print Pascal's triangle pattern
    printf("\n");
    pascalTriangle(n);
    printf("\n");

//to print a hollow square pattern.
    printf("\n");
    HollowSquare(n);
    printf("\n");

    return 0;
}