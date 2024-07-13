#include<stdio.h>
#include<string.h>

int main(){
    char s[]="hello world";
    char c='A';
    
    int n=strlen(s);
    
    for(int i=n;i>3;i--){
        s[i]=s[i-1];
    }
    s[3]=c;
    
    printf("%s\n",s);
    return 0;
    
}
