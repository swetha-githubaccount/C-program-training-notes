#include <stdio.h>
void rightTriangle(int n)
{
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void rightTriangleInverted(int n)
{
    for(int row=n-1;row>=0;row--)
    {
        for(int col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void leftTriangle(int n)
{
    for(int row=0;row<n;row++)
    {
        for(int spaces=0;spaces<n-row-1;spaces++)
        {
            printf("  ");
        }
        for(int col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void leftTriangleInverted(int n)
{
    for(int row=n-1;row>=0;row--)
    {
        for(int spaces=0;spaces<n-row-1;spaces++)
        {
            printf("  ");
        }
        for(int col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void straightTriangle(int n)
{
    for(int row=0;row<n;row++)
    {
        for(int spaces=0;spaces<n-row-1;spaces++)
        {
            printf(" ");
        }
        for(int col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void straightTriangleInverted(int n)
{
    for(int row=n-1;row>=0;row--)
    {
        for(int spaces=0;spaces<n-row-1;spaces++)
        {
            printf(" ");
        }
        for(int col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n ;
    scanf("%d",&n);
    printf("\n");
    rightTriangle(n);
    printf("\n");
    rightTriangleInverted(n);
    printf("\n");
    leftTriangle(n);
    printf("\n");
    leftTriangleInverted(n);
    printf("\n");
    straightTriangle(n);
    printf("\n");
    straightTriangleInverted(n);
    printf("\n");
    return 0;
}