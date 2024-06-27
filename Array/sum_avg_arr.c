#include<stdio.h>

int main(){
	int a[]={42,492,94,93,49,10,38};
	int sum=0;

	int arr_size=sizeof(a)/sizeof(a[0]);

	for(int i=0;i<arr_size;i++){
		sum+=a[i];
	}
	printf("Sum of all element of Array: %d\n",sum);
	printf("Avarage of given array: %d\n",sum/arr_size);
	return 0;
}

