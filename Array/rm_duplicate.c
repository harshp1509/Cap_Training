#include<stdio.h>

int main(){
        int a[]={4,29,9,2,4,2,7,6,4,9,4};
        int n=sizeof(a)/sizeof(a[0]);
        int f[n];

        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        if(a[i]==a[j]){
                                f[j]=-1;
                        }
                }
                if(f[i]!=-1){
                        
                }
        }
	
        return 0;
}

