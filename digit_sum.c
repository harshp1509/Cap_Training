#include<stdio.h>

int main(){
	int a;
	printf("Enter any number:\n");
	scanf("%d",&a);
	int sum=0;

	while(a){
		sum+=(a%10);
		a=a/10;
	}
	printf("sum of all digit of given number :%d\n",sum);
	return 0;
}


