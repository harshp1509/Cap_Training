#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    char s[] = "jbdsv|kdjsvs|kjdbfv|jbdsv|jdsfv|hkgf";
    
    char *token = strtok(s, "|");
    char *ans[100]; 
    int c = 0;

    while (token != NULL) {
        int flag = 1;
        
        for (int i = 0; i < c; i++) {
            if (strcmp(token, ans[i]) == 0) {
                flag = 0;
                break;
            }
        }
        
        if (flag) {
            ans[c] = (char *)malloc(strlen(token) + 1);
            strcpy(ans[c], token); 
            c++;
        }
        
        token = strtok(NULL, "|");
    }
    
    for (int i = 0; i < c - 1; i++) {
        for (int j = 0; j < c - i - 1; j++) {
            if (strcmp(ans[j], ans[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, ans[j]);
                strcpy(ans[j], ans[j + 1]);
                strcpy(ans[j + 1], temp);
            }
        }
    }
    
    for (int i = 0; i < c; i++) {
        printf("%s\n", ans[i]);
        free(ans[i]);
    }
    
    return 0;
}

