#include <stdio.h>
#include "my_thread.h"
#include "pthread.h"
#include "stdlib.h"
#include "unistd.h"

void *routine()
{
	printf("Test from threads.\n");
	sleep(3);
	printf("Ending thread.\n");
}

int main() {
	pthread_t t1,t2;

	if (pthread_create(&t1,NULL,&routine,NULL)!=0)
		return 1;
	if (pthread_create(&t2,NULL,&routine,NULL)!=0)
		return 2;
	pthread_join(t1,NULL);
	pthread_join(t2,NUL);
	return 0;
}
