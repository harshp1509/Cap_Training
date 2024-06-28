#include<stdio.h>  
#include<string.h>
 
typedef struct {
    char pID[100];
    int total_sales;
}product;
 
 
void sortdsc(product arr[], int n){
    for(int i=0;i<n-1;i++){       
        for(int j=i+1;j<n;j++){
            if(arr[i].total_sales<arr[j].total_sales){
                product temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
 
 
int main ()  
{  
    int n;
    printf("enter number of products: ");
    scanf("%d",&n);
    product arr[n];
    printf("\nenter products information: ");
    for(int i=0;i<n;i++){
        scanf("%s ",arr[i].pID);
        scanf("%d", &arr[i].total_sales);
    }
    sortdsc(arr,n);
    
    printf("\nproducts in descending order:\n");
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i-1;j>=0;j--){
            if(strcmp(arr[i].pID,arr[j].pID)==0)
            {
                flag=0;
            }
        }
        if(flag){
             printf("%s -> %d\n", arr[i].pID, arr[i].total_sales);
        }
    } 
    return 0;

}  

