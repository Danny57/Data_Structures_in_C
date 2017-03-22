#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "LinkedList.h"


int stringCompare(void * stringOne, void* stringTwo)
{
	char * a = (char *) stringOne; 
	char * b = (char *) stringTwo; 

	return strcmp(a,b);
}

void printString(void * data)
{
	char* word = (char*) data;
	printf("The Word is: %s\n", word);	
}

/*This main method shows the user how the LinkedList methods work 
using strings... The user must implement his or her own print method and compare method. The methods declared above show this.*/
int main()
{
	//List to be inserted to 
	LinkedList * listOne = (LinkedList*) malloc(sizeof(LinkedList));

	//Create Words to be added
	char* word0 = "Dog";
	char* word1 = "Cat";
	char* word2 = "Mouse";
	char* word3= "Moose";
	char* word4 = "MountaiLion";
	char* word5 = "MountainCat";
	char* word6 = "Fish";
	char* word7 = "Zebra";

	//LinkedList ready to be used
	initializeList(listOne);

	printf("/*****************************/");
	printf("\n");

	//Add first node and check see if size and node in list
	addFrontList((void*) word0,listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	//Add two more nodes to the front of list... expect Mouse to be printed first.
	addFrontList((void*) word1,listOne);
	addFrontList((void*) word2,listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	//Add rest of nodes to the back of list... expect print out two be mouse cat dog mouse mountLion mountainCat....
	addFrontList((void*) word3,listOne);
	addFrontList((void*) word4,listOne);
	addFrontList((void*) word5,listOne);
	addFrontList((void*) word6,listOne);
	addFrontList((void*) word7,listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	//Remove first node and check size and nodes in list
	removeFrontList(listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	//Remove two more nodes from front of list
	removeFrontList(listOne);
	removeFrontList(listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	//Remove one node from back of list
/*	removeBackList(listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");
	
*/
	
	//Try to remove more nodes then are in list
	removeFrontList(listOne);
	removeFrontList(listOne);
	removeFrontList(listOne);
	removeFrontList(listOne);
	removeFrontList(listOne);
		removeFrontList(listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	//Reload List
	addFrontList((void*) word0,listOne);
	addFrontList((void*) word1,listOne);
	addFrontList((void*) word2,listOne);
	addFrontList((void*) word3,listOne);
	addFrontList((void*) word4,listOne);
	addFrontList((void*) word5,listOne);
	addFrontList((void*) word6,listOne);
	addFrontList((void*) word7,listOne);
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("/*****************************/\n\n");

	/*Retrieve head value and tail value of list*/
	printf("The value of the head of list is: %s\n",(char*)getHeadList(listOne));

	printf("\n");

	printf("/*****************************/\n\n");
	
	/*Starts at begining of list and retrieves next node*/
	printf("The next word after first word of list is: %s\n", (char*) next(listOne));

	printf("The next word after second word of list is: %s\n", (char*) next(listOne));

	next(listOne);
	next(listOne);
	next(listOne);
	next(listOne);
		
	printf("The next word after seventh word of list is: %s\n", (char*) next(listOne));
	printf("\n");

	printf("/*****************************/\n\n");

	//Shows that the find method works
	char* word8= "Moose";

	char* result = (char*)(findData(stringCompare, (void *) word8, listOne));

	printf("The word %s was found in the list.\n", result);

	char* word9= "Reptile";

	char* result2 = (char*)(findData(stringCompare, (void *) word9, listOne));

	printf("The word %s was found in the list.\n", result2);

	printf("\n");

	printf("/*****************************/\n\n");
	//Remove all nodes from the list
	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n\n");

	removeAll(listOne);

	printf("The list is size %zd.\n",listSize(listOne));
	printList(listOne,printString);
	printf("\n");

	printf("Demonstration of Generic Singly Linked List\n");

	free(listOne);

	/*Here user would have to deallocate any data that was allocated*/
	return 0 ;
}
