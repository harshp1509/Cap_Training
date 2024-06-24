#include<stdio.h>
 
int main(){
	int a,ans=0,base=1;
	printf("Enter the binary Number to convert decimal number\n");
	scanf("%d",&a);
	while(a){
		int lt=a%10;
		a=a/10;
		ans+=lt*base;
		base=base*2;
	}
	printf("Decimal Number :- %d\n",ans);
}

