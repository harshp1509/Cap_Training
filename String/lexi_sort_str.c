#include<stdio.h>
#include<string.h>

int main(){
	int n;
	printf("Enter the number of string:\n");
	scanf("%d",&n);
	char s[n][100];

	printf("Enter %d words:\n",n);

	for(int i=0;i<n;i++){
		fgets(s[i],sizeof(s[i]),stdin);
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(s[i],s[j])>0){
				char temp[100];
				strcpy(temp,s[i]);
				strcpy(s[i],s[j]);
				strcpy(s[j],temp);
			}
		}
	}

	printf("sorted string is given below: \n");
	for(int i=0;i<n;i++){
		fputs(s[i],stdout);
	}

	return 0;
}

