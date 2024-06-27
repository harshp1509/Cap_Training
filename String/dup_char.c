#include<stdio.h>
#include<string.h>

int main(){
	char s[]="hello";
	int idx=0;
	int n=sizeof(s)/sizeof(s[0]);

	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<i;j++){
			if(s[i]==s[j])
				break;
		}
		if(i==j)
			s[idx++]=s[i];
	}
	s[idx]='\0';

	printf("%s\n",s);
	return 0;
}

