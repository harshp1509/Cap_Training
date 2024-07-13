#include<stdio.h>
#include<string.h>

int main(){
    char s[]="C programming";
    char word[]="ABC";
    
    int n=strlen(s);
    int m=strlen(word);
    
    char ans[n+m];
    int p=0;
    
    for(int i=0;i<3;i++){
        ans[p]=s[i];
        p++;
    }
    for(int i=0;i<m;i++){
        ans[p]=word[i];
        p++;
    }
    for(int i=3;i<n;i++){
        ans[p]=s[i];
        p++;
    }
    printf("%s\n",ans);
    
    return 0;
}

