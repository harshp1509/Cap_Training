#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* mythreadfun(void* arg){
}

int main(){
	pthread_t tid[5];
	pthread_attr_t attr;

	pthread_attr_init(&attr);
	pthread_after_setdetachstate(&attr,PTHREAD_CREATE_DETACHED);

	for(int i=0;i<5;i++){
		int* thread_id=malloc(sizeof(int));
		*thread_id=i;
		int rc=pthread_create(&tid[i],&attr,mythreadfun,(void*)thread_id);
		if(rc){
			printf("error\n");
			exit(-1);
		}
	}

	pthread_attr_destroy(&attr);
	sleep(5);

	printf("main thread: exiting\n");
	return 0;
}
