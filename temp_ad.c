#include<stdio.h>

int main(){
	float temp;
	printf("Enter the temperature:\n");
	scanf("%f",&temp);

	if(temp>=30){
		printf("It's hot outside, stay hydrated!\n");
	}
	else if(temp>=20 && temp<30){
		printf("The weather is nice and warm.\n");
	}
	else if(temp>=10 && temp<20){
		printf("It's bit chilly, wear a jacket.\n");
	}
	else if(temp<10){
		printf("It's cold outside, stay warm.\n");
	}
	return 0;
}



