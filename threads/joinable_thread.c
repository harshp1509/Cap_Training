#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* worker(void* arg){
	int thread_id=*(int*)arg;
	printf("thread %d is running\n",thread_id);
	sleep(1);
	printf("thread %d is done\n",thread_id);
	free(arg);
	return NULL;
}


int main(){
	pthread_t threads[3];

	for(int i=0;i<3;i++){
		int *thread_id=malloc(sizeof(int));
		*thread_id=i;
		if(pthread_create(&threads[i],NULL,worker,thread_id)!=0){
				perror("failed to create thread\n");
				return 1;
		}
	}

	for(int i=0;i<3;i++){
		if(pthread_join(threads[i],NULL)!=0){
			perror("failed to join thread");
			return 1;
		}
	}

	printf("all threads have finished\n");
	return 0;
}
