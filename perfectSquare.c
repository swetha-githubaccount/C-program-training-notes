// Time complexity : O(log n)

#include <stdio.h>
int perfectSquare(int n)
{
    int low = 0, high = n, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(mid * mid == n)
            return 1;
        else if(mid * mid > n)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return 0;
}

int main()
{
    int n ;
    scanf("%d",&n);
    int m=perfectSquare(n);
    if(m == 1)
        printf("%d is perfect Square",n);
    else
        printf("%d is not a perfect Square",n);
    return 0;
}
