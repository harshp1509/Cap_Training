#include<stdio.h>

int main(){
        int ot;
        printf("\nEnter 1 for Convert Celsius to Fahrenheit.\n Enter 2 for Convert Fahrenheit.\n");
        scanf("%d",&ot);
        printf("\nEnter Temperture:- \n");
        float t;
        scanf("%f",&t);
        if(ot==1){
                printf("\nResultant Fahrenheit Temperture:- %f\n",(t*1.8)+32);
	}
	else if(ot==2){
		printf("\nResultant Celsius Temperture:- %f\n",(t-32)/1.8);
	}
	else{
		printf("\nEnter Valid Input\n");
	}
	return 0;
}


