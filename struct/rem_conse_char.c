#include <stdio.h>
#include <string.h>

void remove_consecutive_chars(char *str) {
    int length = strlen(str);

    int j = 0,k=0;
    for (int i = 1; i < length; ++i) {
        if (str[i] - str[k] == 1) {
         	if(str[i+1]-str[i]==1 && i+1<length){
			k++;
			continue;
		}
		else{
			j--;
		}
        } else {
            j++;
	    k++;
            str[j] = str[i];
        }
    }

    str[j + 1] = '\0';  
}

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%s", str);

    remove_consecutive_chars(str);

    printf("Word after removing consecutive characters: %s\n", str);

    return 0;
}

