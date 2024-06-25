#include<stdio.h>
#include<math.h>

int main(){
	int a;
	printf("enter any number:\n");
	scanf("%d",&a);
	int c=1,temp=a;
	while(temp){
		c=c*10;
		temp=temp/10;
	}
	int sq=(a*a)%c;
	if(sq==a){
		printf("Number is automorphic number \n");
	}
	else{
		printf("Number is not automorphic number \n");
	}
	return 0;
}



