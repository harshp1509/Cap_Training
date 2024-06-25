#include<stdio.h>

int main(){
	int a[]={1,2,3,4,5};
	int b[]={6,7,8,9,10};
	int a_size=sizeof(a)/sizeof(a[0]);
	int b_size=sizeof(b)/sizeof(b[0]);
	int c[a_size+b_size];

	for(int i=0;i<b_size;i++){
		c[i]=b[i];
	}

	for(int i=0;i<a_size;i++){
		c[a_size+i]=a[i];
	}
	for(int i=0;i<a_size+b_size;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}

