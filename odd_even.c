#include<stdio.h>

int main(){
	int a;
	printf("Enter number to check even odd\n");
	scanf("%d",&a);
	if(a%2==0){
		printf("given number is even\n");
	}
	else{
		printf("given number is odd\n");
	}
	return 0;
}

