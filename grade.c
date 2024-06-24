#include<stdio.h>

int main(){
	int g;
	printf("Enter the Score Between 0 to 100: \n");
	scanf("%d",&g);
	if(g>=90){
		printf("Your Grade is \"A\" \n");
	}
	else if(g>=80 && g<90){
		printf("Your Grade is \"B\" \n");
		}
	else if(g>=70 && g<80){
		printf("Your Grade is \"C\" \n");
	}
	else if(g>=60 && g<70){
		printf("Your Grade is \"D\" \n");
	}
	else{
		printf("Your Grade is \"F\" \n");
	}
	return 0;
}

