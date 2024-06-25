#include<math.h>
#include<stdio.h>

int main(){
	int a;
	printf("enter any number: \n");
	scanf("%d",&a);
	float sq=sqrt(a);
	
	int deff1=(ceil(sq)*ceil(sq))-a;
	int deff2=a-(floor(sq)*floor(sq));
	if(deff1<deff2){
		printf("nearest square number is :%f\n",ceil(sq)*ceil(sq));
	}
	else{
		printf("nearest square number is :%f\n",floor(sq)*floor(sq));
	}
	return 0;
}

