#include<stdio.h>

int main(){
	char s1[]="abc";
	char s2[]="bac";

	for(int i=0;i<strlen(s1);i++){
		if(s1[i]>s1[i+1]){
			char temp=s1[i];
			s1[i]=s1[i+1];
			s1[i+1]=temp;
		}
		 if(s2[i]>s2[i+1]){
                        char temp=s2[i];
                        s2[i]=s2[i+1];
                        s2[i+1]=temp;
                }
	}
	int flag=1;
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]!=s2[i]){
			flag=0;
			break;
		}
	}
	flag==1?printf("Given two string is anagram of each other\n"):printf("given two string is not anagram of each other\n");
	return 0;
}
	
