#include<stdio.h>
#include<string.h>

int main(){
    char s[]="ABCDEF";
    // char word1[]="hello";
    // char word2[]="world";
    // char word3[]="!";
    // int p1=0,p2=5,p3=6;
    
    int n;
    printf("enter the number of position to insert the word: \n");
    scanf("%d",&n);
    
    char ans[100];
    int copy_size=0;
    
    for(int i=0;i<n;i++){
        int pos;
        printf("enter the position:\n");
        scanf("%d",&pos);
        char word[50];
        printf("Enter the %d number: ",i+1);
        scanf("%s",word);
        char temp[100]="";
        if(ans!=NULL){
            strncpy(temp,ans,pos+copy_size);
        }
        else{
            strncpy(temp,s,pos);
        }
        strcat(temp,word);
        strcat(temp,s+pos);
        strcpy(ans,temp);
        copy_size+=strlen(word);
    }
    
    printf("%s",ans);
   
    return 0;
}
