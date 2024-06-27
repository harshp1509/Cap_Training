#include<stdio.h>
#include<string.h>

int main(){
	char c[]="dfjasd ksjdbfa lsjdf sldkjf lajsidbf";

	char* token=strtok(c," ");
	
	while(token!=NULL){
		printf("%s\n",token);
		token=strtok(NULL," ");
	}
	return 0;
}


