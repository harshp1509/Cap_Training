#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    pid_t p;
    p=fork();
    
    if(p==0){
        printf("hello from child!\n");
    }
    else{
        printf("hello from parent!\n");
    }
    return 0;
}
