#include<stdio.h>
#include<string.h>

int main(){
        char s[]="abcjksdfdsfbadfabba";
        int score=0;
        int n=sizeof(s)/sizeof(s[0]);

        for(int i=0;i<n-4;i++){
                int idx=1;

                for(int j=i;j<i+2;j++){
                        if(s[j]!=s[j+4-idx]){
                                idx=1;
                                break;
                        }

                        if(j==i+1 && s[j]==s[j+4-idx]){
                                score+=5;
                        }
                        idx=idx+2;
                }
                idx=1;
                for(int j=i;j<i+2;j++){
                 
                        if(s[j]!=s[j+5-idx]){
                                break;
                        }
                        
                        if(j==i+1 && s[j]==s[j+5-idx]){
                                score+=10;
                        }
                        idx=idx+2;
                }
        }

        printf("score: %d\n",score);
        return 0;
}

