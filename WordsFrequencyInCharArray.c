#include <stdio.h>
void AlphabetFreq(char arr[])
{
    int LowerCount[26] = {0};  
    int UpperCount[26] = {0};  
    for(int i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] >= 'A' && arr[i] <= 'Z') 
            UpperCount[arr[i] - 'A']++;
        else if(arr[i] >= 'a' && arr[i] <= 'z') 
            LowerCount[arr[i] - 'a']++;
    }
    printf("Uppercase letter frequencies:\n");
    for(int i = 0; i < 26; i++)
    {
        if(UpperCount[i] > 0)
            printf("%c: %d\n", 'A' + i, UpperCount[i]);
    }
    printf("Lowercase letter frequencies:\n");
    for(int i = 0; i < 26; i++)
    {
        if(LowerCount[i] > 0)
            printf("%c: %d\n", 'a' + i, LowerCount[i]);
    }
}
int main()
{
    char arr[100];
    printf("Enter a string: ");
    scanf("%s", arr);  
    AlphabetFreq(arr);

    return 0;
}