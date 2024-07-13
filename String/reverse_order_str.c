#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
        char s[]="adufb bufb cdsiu dudbv eudvb fivb";
        char* token=strtok(s," ");
        char *res=NULL;

        while(token!=NULL){
                char *temp = (char *) malloc(strlen(token) + 1 + (res ? strlen(res) : 0));
                strcat(temp,token);
                if(res!=NULL){
                strcat(temp," ");
                strcat(temp,res);
                }
                free(res);
                res=temp;
                token=strtok(NULL," ");
        }

        printf("%s\n",res);
        free(res);

        return 0;
}

