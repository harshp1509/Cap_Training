#include<stdio.h>
#include<string.h>

int main(){
	char s[]="idufb iufb sdsiu iudbv iudvb divb";
	char* token=strtok(s," ");
	char res[]="";

	while(token!=NULL){
		char temp[]=token;
		strcat(temp," ");
		strcat(temp,res);
		res=temp;
		token=strtok(NULL," ");
	}

	printf("%s\n",res);

	return 0;
}

