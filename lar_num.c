#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter Three Number:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("\n First Number :%d is the Largest among three number\n",a);
	}
	else if(b>c && b>a){
		printf("\n Second Number :%d is the Largest Among three number\n",b);
	}
	else if(c>a && c>b){
		printf("\n Third Number : %d is the Largest Among three Number\n",c);
	}
	return 0;
}

