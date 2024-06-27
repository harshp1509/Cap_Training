#include<stdio.h>

int main(){
	int a[4][4]={{3,4,5,6},
		{7,6,5,4},
		{4,3,5,2},
		{3,0,1,5}};
	int b[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			b[i][j]=a[j][i];
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

