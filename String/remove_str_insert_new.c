#include<stdio.h>
#include<string.h>

int main(){
    char s[]="helloworld";
    char* word_ind=strstr(s,"world");
    int ind=word_ind-s;
    char new[]="universe";
    
    char res[100];
    strncpy(res,s,ind);
    strcat(res,new);
    strcat(res,s+ind+strlen("world"));
    printf("%s",res);

    return 0;
}
