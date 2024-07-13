#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char sid[100];
    int mark;
}student;


int main(){
    int n;
    printf("enetr number of students: ");
    scanf("%d",&n);
    student arr[n];
    
    printf("\nenter the student information: ");
    
    for(int i=0;i<n;i++){
        scanf("%s",arr[i].sid);
        scanf("%d",&arr[i].mark);
    }
    
    printf("\n Average marks of student: \n");
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i-1;j>=0;j--){
            if(strcmp(arr[i].sid,arr[j].sid)==0){
                flag=0;
            }
        }
        if(flag){
            float avg_mark=arr[i].mark;
            int c=1;
            for(int j=i+1;j<n;j++){
                if(strcmp(arr[i].sid,arr[j].sid)==0){
                    avg_mark+=arr[j].mark;
                    c++;
                }
            }
            avg_mark=avg_mark/c;
            printf("%s -> %f \n",arr[i].sid,avg_mark);
        }
    }
    return 0;
}
