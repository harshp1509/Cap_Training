#include<stdio.h>

int main(){
	int a[5]={43,24,92,28,53};
	int mx,mn;
	mx=mn=a[0];

	for(int i=0;i<5;i++){
		if(mx<a[i]){
			mx=a[i];
		}
		if(mn>a[i]){
			mn=a[i];
		}
	}
	
	printf("Maximun element in array: %d\n",mx);
	printf("minimal element in array: %d\n",mn);

	return 0;
}

