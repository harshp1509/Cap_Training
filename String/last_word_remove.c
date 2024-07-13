/**
 * C program to remove last occurrence of a word in given string
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char word[100];
    int i, j, found, index;
    int stringLen, wordLen;

    printf("Enter any string: ");
    gets(str);
    printf("Enter word to remove: ");
    gets(word);

    stringLen = strlen(str); 
    wordLen   = strlen(word); 
    index = -1;
    for(i=0; i<stringLen - wordLen; i++)
    {
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            if(str[i+j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            index = i;
        }
    }

    if(index == -1)
    {
        printf("'%s' not found.");
    }
    else
    {
        for(i=index; i <= stringLen - wordLen; i++)
        {
            str[i] = str[i + wordLen];
        }
        printf("String after removing last '%s': \n%s", word, str);
    }
    return 0;
}

