#include<stdio.h>
#include<string.h>

int main(){
    int a[]={1,2,3,4,2,3,4,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    int v[n];
    memset(&v, 0, sizeof(v));
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            
            if(a[i]==a[j] && v[j]==0){
                v[i]=1;
                v[j]=2;
            }
        }
    }
    printf("unique Numbers:-----\n");
    for(int i=0;i<n;i++){
        if(v[i]==0){
            printf("%d ",a[i]);
        }
    }
    printf("\nduplicate Numbers:-----\n");
    for(int i=0;i<n;i++){
        if(v[i]==1){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
