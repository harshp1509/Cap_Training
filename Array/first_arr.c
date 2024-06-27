#include<stdio.h>

int main(){
	int a[10];

	for(int i=0;i<10;i++){
		a[i]=i+1;
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("Array Element at Index %d: %d\n",i,a[i]);
	}
	return 0;
}

