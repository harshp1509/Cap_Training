#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int a[]={33,22,92,14,58,91};
	int n=sizeof(a)/sizeof(a[0]);
	printf("array element before the reversing\n");
		for(int i=0;i<n;i++){
			printf("%d\n",a[i]);
		}

	for(int i=0;i<n/2;i++){
		swap(&a[i],&a[n-1-i]);			
	}
	printf("Array element after the reversing\n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
