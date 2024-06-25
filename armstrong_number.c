#include<stdio.h>
#include<math.h>

int main(){
        int a;
        printf("enter any number:\n");
        scanf("%d",&a);
        int digit=floor(log10(a))+1;
        int sum_pow=0,temp=a;
	while(temp){
		int s=temp%10;
		sum_pow+=pow(s,digit);
		temp=temp/10;
	}
	if(sum_pow==a){
		printf("Number is Armstrong number\n");
	}
	else{
		printf("Number is not Armstrong number\n");
	}
        return 0;
}

