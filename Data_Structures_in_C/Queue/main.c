#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{
	Queue * queueOne = (Queue *) malloc(sizeof(Queue));

	initializeQue(queueOne);

	//Create Words to be added
	char* word0 = "Dog";
	char* word1 = "Cat";
	char* word2 = "Mouse";
	char* word3= "Alligator";
	char* word4 = "MountaiLion";
	char* word5 = "MountainCat";
	char* word6 = "Fish";
	char* word7 = "Zebra";

	printf("If queue = 1 then queue is empty ... queue = 0 queue has at least one element.\n\n");

	printf("Queue Results of Check: %d\n\n", isEmpty(queueOne));

    	enqueueItem(word0, queueOne);
    	printf("Top Element in queue after push: %s\n\n",(char*)queuePeek(queueOne));

    	enqueueItem(word1, queueOne);
    	printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));

    	enqueueItem(word2, queueOne);
   	 printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));

    	enqueueItem(word3, queueOne);
    	printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));

    	enqueueItem(word4, queueOne);
    	printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));

    	enqueueItem(word5,queueOne);
    	printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));

    	enqueueItem(word6, queueOne);
    	printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));

    	enqueueItem(word7, queueOne);
   	 printf("Top Element in queue after push: %s\n",(char*)queuePeek(queueOne));
	 printf("Rear Element in queue after push: %s\n\n",(char*)queuePeekRear(queueOne));
  
    	printf("The queue size is: %zd\n\n",queSize(queueOne));

    	dequeueItem(queueOne);
    	printf("Top Element in stack after pop: %s\n",(char*)queuePeek(queueOne));
    	dequeueItem(queueOne);
    	printf("Top Element in stack after pop: %s\n",(char*)queuePeek(queueOne));
    	dequeueItem(queueOne);
    	printf("Top Element in stack after pop: %s\n",(char*)queuePeek(queueOne));

    	printf("The queue size is: %zd\n",queSize(queueOne));

	queueClear(queueOne);

	if(!(queuePeek(queueOne)))
	{
		printf("The queue is Empty!\n");
	}

	free(queueOne);

    return 0 ;

}
