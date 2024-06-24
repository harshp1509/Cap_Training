#include<stdio.h>

int main(){
	float h,w,bmi;
	printf("Enter Height in meters :\n");
	scanf("%f",&h);
	printf("Enter Weight in kilogram: \n");
	scanf("%f",&w);

	bmi=w/(h*h);
	if(bmi>=30.0){
		printf("Obesity\n");
	}
	else if(bmi>=25.0 && bmi<30.0){
		printf("Overweight\n");
	}
	else if(bmi>=18.5 && bmi<25.0){
		printf("normal weight\n");
	}
	else if(bmi<18.5){
		printf("underweight\n");
	}
	return 0;
}

