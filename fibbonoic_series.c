#include<stdio.h>
void fibb(int n)
{
    if(n <= 0 )
        printf("Enter valid number");
    else if(n == 1)
        printf("0");
    else
    {
        int a = 0, b = 1, c, temp;
           
            printf("%d  %d  ",a , b);
            c = a + b;
            for(int i =3; i<=n ; i++)
            {
                printf("%d  ",c);
                a = b;
                b = c;
                c = a+b;
            }
    }
}
int main()
{
    int n ;
    scanf("%d", &n);
    fibb(n);
}