#include<stdio.h>

int main(){
	int a[5]={1,2,3,4,5};
	int n;
	printf("Enter the number of left rotation:\n");
	scanf("%d",n);

	for(int i=0;i<n%5;i++){
		for(int j=0;j<4;j++){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	for(int i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

