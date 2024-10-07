#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*
STRING REVERSAL
	  i) If input is "I love programming" the output must be "gnimmargorp evol I".
	 ii) If input is "I love programming" the output must be "I evol gnimmargorp".
	iii) If input is "I love programming" the output must be "programming love I".
*/

#include <stdio.h>
#include <string.h>

// Function to reverse a portion of the string
void reverseString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse the entire string and then reverse each word
void reverseWordsInString(char *str) {
    int n = strlen(str);
    reverseString(str, 0, n - 1);
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseString(str, start, i - 1);
            start = i + 1; 
        }
    }
}

// Function to reverse each word individually in the string
void reverseEachWords(char *str) {
    int start = 0, end = 0;
    int n = strlen(str);

    // Traverse the entire string
    while (end <= n) {
        // If we find a space or reach the end of the string, it's a word boundary
        if (str[end] == ' ' || str[end] == '\0') {
            // Reverse the word found between start and end-1
            reverseString(str, start, end - 1);
            // Move start to the beginning of the next word
            start = end + 1;
        }
        end++;
    }
}



// Whether the two strings are anagram or not
int findWordsContaining(char str1[] , char str2[]) 
{
    int count[256] = {0};
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    if(size1 != size2)
        return 0;
    for(int i=0;i<size1;i++)
    {
        count[(int)str1[i]]++;
    }
    for(int j = 0; j<size2 ; j++)
    {
        count[(int)str2[j]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i] != 0)
            return 0;
    }
    return 1;
}

// Function to find whether the string is an isogram or not
int isIsogram(char str[]) {
    int count[26] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {  
            int index = tolower(str[i]) - 'a';  
            if (count[index] > 0) {
                return 0;  
            }
            count[index]++; 
        }
    }
    return 1;  
}

//Function to find whether the sentence is an pangram or not

int isPangram(char str[]) {
    int alphabet[26] = {0};  
    int index;
    for(int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            index = tolower(str[i]) - 'a';  
            alphabet[index] = 1; 
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) { 
            return 0;  
        }
    }
    return 1;  
}

//Left String rotation
void leftStringRotation(char str[], int k) {
    int size = strlen(str);  
    char temp[100];
    k = k % size;
    for (int i = 0; i < k; i++) {
        temp[i] = str[i];
    }
    for (int i = 0; i < size - k; i++) {
        str[i] = str[i + k];
    }
    for (int i = 0; i < k; i++) {
        str[size - k + i] = temp[i];
    }
}

//Right rotation of the string
void rightStringRotation(char str[], int k) {
    int size = strlen(str);  
    char temp[100];
    k = k % size; 
    for (int i = 0; i < k; i++) {
        temp[i] = str[size - k + i];
    }
    for (int i = size - 1; i >= k; i--) {
        str[i] = str[i - k];
    }
    for (int i = 0; i < k; i++) {
        str[i] = temp[i];
    }
}

// remove duplicates in the string
void removeDuplicates(char str[]) 
{
    int index = 0;
    int size = strlen(str);
    
    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }
        if (j == i) 
            str[index++] = str[i];
    }
    str[index] = '\0'; 
}


int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

// // Whether the two strings are anagram or not
    int res = findWordsContaining(str1 , str2);
    if(res == 1)
        printf("The given string are anagram.\n");
    else
        printf("The given string are not anagram.\n");


//  to find whether the string is an isogram or not
    if (isIsogram(str1)) {
        printf("%s is an isogram.\n", str1);
    } else {
        printf("%s is not an isogram.\n", str1);
    }


//to find whether the sentence is an pangram or not
    if (isPangram(str1)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

//left String rotation
    leftStringRotation(str1, k);
    printf("Left Rotated String: %s\n", str1);

//right string rotation
    rightStringRotation(str1, k);
    printf("Right Rotated String: %s\n", str1);


// remove duplicates in the string
    removeDuplicates(str1);  
    printf("String after removing duplicates: %s\n", str1);

//  string reversal
    // Reverse each word in the string 
    reverseEachWords(str);
    printf("\nReversed each word string is: %s\n", str);
    // Reverse the entire string (Function 2)
    reverseString(str, 0, strlen(str) - 1);
    printf("\nEntire reversed string is: %s\n", str);
    // Reverse the entire string and then reverse each word (Function 3)
    reverseWordsInString(str);
    printf("\nFinal output string is: %s\n", str);

//


    return 0;
}
