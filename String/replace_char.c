#include<stdio.h>
#include<string.h>

int main(){
    char s[]="kjdbf sjdskvb sddvbhdiaib isdbv.";
    int n=sizeof(s)/sizeof(s[0]);
    char new_char='!',old_char='.';
    
    for(int i=0;i<n;i++){
        if(s[i]==old_char){
            s[i]=new_char;
            break;
        }
    }
    printf("new string : %s\n",s);
    return 0;
}
