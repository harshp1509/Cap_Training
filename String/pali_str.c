#include<stdio.h>
#include<string.h>

int main(){
	char s[]="abcba";
	int flag=1;
	int n=strlen(s);
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]){
			flag=0;
			break;
		}
	}
	if(flag){
		printf("String Is palidrome \n");
	}
	else{
		printf("String is not Palidrome \n");
	}
	return 0;
}

