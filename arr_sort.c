#include<stdio.h>

void swap(int *c,int *d){
	int temp=*c;
	*c=*d;
	*d=temp;
}

int main(){
	int a[]={4,3,9,2,1,8,6};
	int n=sizeof(a)/sizeof(a[0]);

	printf("array before sorting....\n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				swap(&a[i],&a[j]);
			}
		}
	}
	printf("array after the sorting:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

