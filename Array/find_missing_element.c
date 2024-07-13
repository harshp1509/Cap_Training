#include<stdio.h>

int main(){
    int a[]={1,2,3,5,6,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    
    int sum=((n+1)*(n+2))/2;
    for(int i=0;i<n;i++){
        sum-=a[i];
    }
    printf("%d",sum);
}
