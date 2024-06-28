#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);
    
     if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i - 1] == ' ' && s[i] != '\0') {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    printf("Capitalized sentence: %s\n", s);

    return 0;
}

