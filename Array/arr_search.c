#include<stdio.h>

int main(){
	int a[7]={8,2,3,9,1,4,7};
	int ele=4;	

	for(int i=0;i<7;i++){
		if(a[i]==ele){
			printf("element %d is present at index : %d\n",ele,i);
		break;
		}
	}
	return 0;
}

