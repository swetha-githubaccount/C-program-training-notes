//TO PRINT SUBSTRING OF THE GIVEN STRING
#include <stdio.h>
#include<string.h>

int main()
{
    char str[] = "Happy";
    int n = strlen(str);
    for(int i=0;i<n ;i++)  // maintains the start index
    {
        for(int j=i;j<n ; j++)  // maintains the end index
        {
            for(int k=i ;k<=j ; k++)  //prints the substring of the string 
                printf("%c",str[k]);
            printf("\n");
        }
    }
    return 0;
}