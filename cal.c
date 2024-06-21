#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b;
    bool lp=true;

    while(lp){
            int op,
                ans;
            printf("\nSelect any number to perform any below operation\n");
            printf("1.  Addition\n 2. Subtraction\n 3. Multipication\n 4. Division\n 5. Exit\n\n");
            scanf("%d",&op);

            if(op!=5){
            printf("Enter Two Number to perform selected operation.\n");
            scanf("%d %d",&a,&b);
            }

        switch(op){
            case 1:
                ans=a+b;
                break;
            case 2:
                ans=b-a;
                break;
            case 3:
                ans=a*b;
                break;
            case 4:
                ans=b/a;
                break;
            case 5:
                printf("exiting......\n");
                lp=false;
                break;
        }
        if(op!=5){
        printf("Answer :- %d",ans);
        }

    }
    return 0;
}


