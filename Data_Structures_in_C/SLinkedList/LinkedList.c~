#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

/*Assumed that user passes an allocated DLinkedList struct*/
void initializeList(LinkedList * list)
{
	list->currentNode = NULL;
	list->head = NULL;	
	
	list->listSize = 0; 		
}

size_t listSize(LinkedList * list)
{
	return list->listSize;
}
void addFrontList(void * data , LinkedList * list)
{
	if(list->listSize == 0)
	{
		list->head = (Node*) malloc(sizeof(Node));
		
		list->currentNode = list->head;
		list->head->next = NULL;

		list->head->data = data;
	}
	else 
	{
		Node* tempNode = (Node*) malloc(sizeof(Node));

		tempNode->next = list->head;
		list->head = tempNode;

		list->head->data = data;	
	}

	list->listSize++;
}

void removeFrontList(LinkedList * list)
{

	if(list->listSize == 0)
	{
		printf("List is empty nothing to remove.\n");
	}
	else
	{
		Node * tempNode = list->head; 

		if(list->listSize == 1)
		{
			list->head = list->currentNode = NULL;
		}
		else
		{
			if(tempNode == list->currentNode)
			{
				list->currentNode = list->currentNode->next; 
			}
			
			list->head = list->head->next;
		}
	
		--(list->listSize);

		free(tempNode); 
	}

}

void* getHeadList(LinkedList * list)
{
	list->currentNode = list->head;
	if(list->currentNode)
	{
		return list->head->data;
	}
	
	return	NULL; 
}

void * next(LinkedList * list)
{
	if(list->currentNode)
	{
		list->currentNode = list->currentNode->next;
	}
	else
	{
		list->currentNode = list->head;
	}

	if(list->currentNode)
	{
		return list->currentNode->data;
	}
	
	return	NULL; 
}

void * findData( int (*compare)(void * a, void * b), void * data, LinkedList * list)
{
	for(list->currentNode = list->head; list->currentNode != NULL; list->currentNode = list->currentNode->next)
	{
		if(compare(data,list->currentNode->data) == 0)
		{
			return list->currentNode->data;
		}	
	}

	list->currentNode = list->head;
	
	return NULL;
}

void removeAll(LinkedList * list)
{
	while(list->listSize)
	{
		list->currentNode = list->head;
		list->head = list->head->next;
		
		--(list->listSize);
		free(list->currentNode);
		
	}

	list->head = list->currentNode = NULL;
}

void printList(LinkedList* list, void (*printFunc)(void* data))
{
	if(list == NULL)
	{
		printf("List is empty.\n");
	}

	list->currentNode = list->head;
	
	while(list->currentNode != NULL)
	{
		printFunc(list->currentNode->data);
		list->currentNode = list->currentNode->next;
	}

	list->currentNode = list->head;
}

