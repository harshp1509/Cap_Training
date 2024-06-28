#include <stdio.h>
#include <string.h>

void remove_adjacent_duplicates(char *str) {
    int length = strlen(str);
    
    int j = 0; 
    for (int i = 1; i < length; ++i) {
        if (str[j] == str[i]) {
            if(str[i]==str[i+1] && (i+1)<length){
                continue;
            }
            else{
            j--;
            }
        } else {
            j++;
            str[j] = str[i];
        }
    }
    
    str[j+1] = '\0';
}

int main() {
    char str[100];
    
    printf("Enter a word: ");
    scanf("%s", str);
    
    remove_adjacent_duplicates(str);
    
    printf("Word after removing adjacent duplicates: %s\n", str);
    
    return 0;
}

