/*A structure that represents an individual node that will 
act as a link within the doubly linked list. Void * data allows
this doubly linked list to be of any type.*/
typedef struct _Node
{
	struct _Node * prev;
	struct _Node * next; 
	void * data;
} Node;

/*The actual doubly linked list structure which will keep reference
to the hed and tail of the list.*/
typedef struct _DLinkedList 
{
	Node * head; 
	Node * tail;
	Node * currentNode;
	size_t listSize; 
} DLinkedList;


/*Assumed that user passes an allocated DLinkedList struct*/
void initializeList(DLinkedList * list);
/*Returns the current size of the DLinkedList*/
size_t listSize(DLinkedList * list);
/*Adds a node with specified data to the front of DLinkedList*/
void addFrontList(void * data , DLinkedList * list);
/*Removes a node from the front of the list and data's memory is users responsibility to free*/
void removeFrontList(DLinkedList * list);
/*Returns a void pointer to the value stored in node pointed 
to by Head of the DlinkedList*/
void* getHeadList(DLinkedList * list);
/*Returns a void pointer to the values stored in node pointed to by Tail of 
DLinkedList*/
void* getTailList(DLinkedList * list);
/*Adds a node with specified data to back of DLinkedList*/
void addBackList(void * data , DLinkedList * list);
/*Removes a node from the back of the list and automatically frees data from node*/
void removeBackList(DLinkedList * list);
/*Removes a node from the back of the list and data's memory is users responsibility to free*/
void * next(DLinkedList * list);
/*Returns a void pointer to the value stored in node pointed to by previous*/
void * previous(DLinkedList * list);
/*Searches the DLinkedList lookng for specified element and returns that element if found ... user must pass a compare function that fits declation provided*/
void * findData( int (*compare)(void * a, void * b), void * data, DLinkedList * list);
/*Removes all the nodes from the DLinkedList the data memory within each node must be taken care of by the user*/
void removeAll(DLinkedList * list);

/*Prints the DLinkedList*/
void printList(DLinkedList* List, void (*printFunc)(void* data));

