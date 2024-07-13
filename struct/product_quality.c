#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char pid[100];
    int quantity;
}product;

void sortdec(product arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].quantity<arr[j].quantity){
                product temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int n;
    printf("enetr number of records: ");
    scanf("%d",&n);
    product arr[n];
    
    printf("\nenter the product information: ");
    
    for(int i=0;i<n;i++){
        scanf("%s",arr[i].pid);
        scanf("%d",&arr[i].quantity);
    }
    sortdec(arr,n);
    
    
    printf("\n Product in decreasing order \n");
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i-1;j>=0;j--){
            if(strcmp(arr[i].pid,arr[j].pid)==0){
                flag=0;
            }
        }
        if(flag){
            int sum_q=arr[i].quantity;
            for(int j=i+1;j<n;j++){
                if(strcmp(arr[i].pid,arr[j].pid)==0){
                    sum_q+=arr[j].quantity;
                }
            }
            printf("%s -> %d \n",arr[i].pid,sum_q);
        }
    }
    return 0;
}
