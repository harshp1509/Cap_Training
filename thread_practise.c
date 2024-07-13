#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


int g=0;

void *mythreadfun(void *vargp){
	int *myid=(int *)vargp;

	static int s=0;

	++s,++g;

	printf("Thread ID: %d, static: %d, global: %d\n",*myid,++s,++g);
}


int main(){
	int i=0;
	pthread_t tid;
	for(i=0;i<3;i++){
		pthread_create(&tid,NULL,mythreadfun,(void *)&tid);
	}

	pthread_exit(NULL);
	return 0;
}
