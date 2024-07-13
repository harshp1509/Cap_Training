#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find_anagram(char *a,char *b){
    char c[strlen(a)+1],d[strlen(b)+1];
    
    strcpy(c,a);
    strcpy(d,b);
    for (int i = 0; i < strlen(c)-1; i++) {
    for (int j = 0; j < strlen(c)-i-1; j++) {
        if (c[j] > c[j+1]) {
            char temp = c[j];
            c[j] = c[j+1];
            c[j+1] = temp;
        }
        if (d[j] > d[j+1]) {
            char temp = d[j];
            d[j] = d[j+1];
            d[j+1] = temp;
        }
    }
    }
    return strcmp(c,d);
}

void sort_words(int c, char *ans[c]) {
    for (int i = 0; i < c - 1; i++) {
        for (int j = 0; j < c - i - 1; j++) {
            if (strcmp(ans[j], ans[j + 1]) > 0) {
                char *temp = malloc(strlen(ans[j]) + 1);
                strcpy(temp, ans[j]);
                strcpy(ans[j], ans[j + 1]);
                strcpy(ans[j + 1], temp);
                free(temp);
            }
        }
    }
}


int main() {
    char s[] = "one|two|one|three|four|tow";
    char *s_str[100];
    int c = 0;

    char *token = strtok(s, "|");

    while (token != NULL) {
        s_str[c] = (char *)malloc(strlen(token) + 1);
        strcpy(s_str[c], token);
        c++;
        token = strtok(NULL, "|");
    }

    int r[c];
    memset(r, 0, sizeof(r));
    for (int i = 0; i < c - 1; i++) {
        for (int j = i + 1; j < c; j++) {
            if (find_anagram(s_str[i], s_str[j]) == 0 && r[j] == 0) {
                r[i] = 1;
                r[j] = 2;
            }
        }
    }

    char *ans[100];
    int e = 0;
    for (int i = 0; i < c; i++) {
        if (r[i] == 0) {
            ans[e] = (char *)malloc(strlen(s_str[i]) + 1);
            strcpy(ans[e], s_str[i]);
            e++;
        }
        free(s_str[i]); 
    }

    sort_words(e, ans);

    printf("Sorted and filtered strings:\n");
    for (int i = 0; i < e; i++) {
        printf("%s\n", ans[i]);
        free(ans[i]); 
    }

    return 0;
}

