#include<stdio.h>
#include<string.h>

int main(){
    char s[]="jdkfhjdsfbvjbadkvjs";
    int no_string=0;
    
    for(int i=0;i<strlen(s)-1;i++){
        int c=0,d=0;
        for(int j=i;j>=0;j--){
            if(s[j]!='a' && s[j]!='e' && s[j]!='o' && s[j]!='u' && s[j]!='i'){
                c++;
            }
        }
        for(int j=i+1;j<strlen(s);j++){
            if(s[j]!='a' && s[j]!='e' && s[j]!='o' && s[j]!='u' && s[j]!='i'){
                d++;
            }
        }
        if(c>d){
            no_string++;
        }
    }
    printf("no of possible string: %d\n",no_string);
}
