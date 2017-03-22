#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void initializeQue(Queue * queue)
{
	queue->head = queue->tail = NULL;
	queue->queueSize = 0;
}

void queueClear(Queue * queue)
{
	while(queue->queueSize)
	{
		QNode * tempNode = queue->head;
	
		queue->head = queue->head->Node;

		free(tempNode);

		queue->queueSize--;
	}
	
	queue->head = queue->tail = NULL;
}

int isEmpty(Queue * queue)
{
	if(queue->queueSize == 0)
	{
		return 1;
	}

	return 0 ;
}

void enqueueItem(void * data, Queue * queue)
{
	if(queue->head == NULL)
	{
		queue->head = (QNode*) malloc(sizeof(Queue));

		queue->tail = queue->head;
		queue->head->data = data;
	}
	else
	{
		queue->tail->Node = (QNode*) malloc(sizeof(Queue)); 
		
		queue->tail = queue->tail->Node;
		queue->tail->data = data;
	}
	
	queue->tail->Node = NULL;
	queue->queueSize++;	
}

void dequeueItem(Queue * queue)
{
	if(queue->queueSize != 0)
	{
		QNode * tempNode = queue->head;

		if(queue->queueSize == 1)
		{
			queue->head = queue->tail = NULL;
		}
		else
		{
			queue->head = queue->head->Node;
		}

		free(tempNode);
		queue->queueSize--;
	}
}

void * queuePeek(Queue * queue)
{
	if(queue->queueSize == 0)
	{
		return NULL;
	}
	
	return queue->head->data;
}

void * queuePeekRear(Queue * queue)
{
	if(queue->queueSize == 0)
	{
		return NULL;
	}
	
	return queue->tail->data;
}

size_t queSize(Queue * queue)
{
	return queue->queueSize;
}





