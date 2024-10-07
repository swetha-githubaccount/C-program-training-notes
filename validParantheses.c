#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validParantheses(char str[]) 
{
    char stack[1000];
    int top = -1;
    int size = strlen(str);
    
    for (int i = 0; i < size; i++) 
    {
        char curr = str[i];
        
        if (curr == '(' || curr == '[' || curr == '{') 
        {
            stack[++top] = curr;
        } 
        else if (curr == ')' || curr == ']' || curr == '}') 
        {
            if (top < 0) 
                return false;
            char topchar = stack[top--];
            if ((curr == ')' && topchar != '(') ||
                (curr == '}' && topchar != '{') ||
                (curr == ']' && topchar != '[')) 
                return false;
        }
    }
    return top == -1;
}

int main() 
{
    char str1[100];
    printf("Enter the string: ");
    scanf("%s", str1); 

    if (validParantheses(str1)) 
        printf("true\n");
    else 
        printf("false\n");

    return 0;
}