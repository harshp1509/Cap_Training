#include<stdio.h>

int main(){
        int a[]={3,7,1,2,8,3,4,9};
        int n=sizeof(a)/sizeof(a[0]);
	int fl,sl;
	fl=sl=a[0];

	for(int i=0;i<n;i++){
		if(a[i]>fl){
			sl=fl;
			fl=a[i];
		}
	}
	printf("second largest element: %d\n",sl);
	return 0;
}
