#include<stdio.h>

int main(){
	int a[]={3,9,38,29,29,49,23,4};
	int n=sizeof(a)/sizeof(a[0]);
	int flag=1;

	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-1]){
			flag=0;
		}
	}

	if(flag){
		printf("array is palidrome\n");
	}
	else{
		printf("array is not palidrome\n");
	}
	return 0;
}


