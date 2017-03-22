//
//  StringList.c
//  lec2
//
//  Created by Francisco on 6/28/15.
//  Copyright (c) 2015 Francisco. All rights reserved.
//

//#include "ArrayList.h"

//#ifndef __lec2__StringList__
//#define __lec2__StringList__

#include <stdio.h>
#include <stdlib.h> 
#include "String.h"
#include "globalconst.h" 
#include "ArrayList.h"



/*
//Given By Professor
boolean ArrayList_New(ArrayList * list);									//Done
boolean ArrayList_Expand(ArrayList * list);									//Done
boolean ArrayList_Add(ArrayList * list, void * item);								//Done
void * ArrayList_GetList(ArrayList * list);									//Done
inline size_t ArrayList_GetSize(ArrayList * list);								//Done
void * ArrayList_Get(ArrayList *list, size_t index);								//Done
boolean ArrayList_Remove(ArrayList * list, size_t index);							//Done
int String_New(String * strObj, char * str);									//Done


boolean ArrayList_InitStruct(ArrayList * list);									//Done
boolean ArrayList_FreeStruct(ArrayList * list);									//Done
boolean ArrayList_Free(ArrayList * list);									//Done
boolean ArrayList_RemoveLast(ArrayList *list);									//Done
boolean ArrayList_Set(ArrayList *list, size_t index, void * item); 						//Done
boolean ArrayList_Clear(ArrayList * list);									//Done
boolean ArrayList_Copy(ArrayList * destination, const ArrayList * source);                                      //Done
boolean ArrayList_ExpandReserved(ArrayList * list, size_t reserved);//Done
boolean ArrayList_Compact(ArrayList * list); //it compacts to size + 100 if possible. 
*/


//Initializes the size of array to zero and the callocs space for number of spaces in reserve ... Each pointer points to zero 
boolean ArrayList_New(ArrayList * list)
{
    list->size= 0;
    //it is assume that * list is already allocated
    //otherwise you will need this:
    //list->arr = calloc(1,sizeof(ArrayList));
    list->arr = calloc(INITIAL_SIZE_STRING_LIST,INITIAL_SIZE_STRING_LIST * sizeof(void *));
    //Did not allocate memory correctly or Operating System didnt  find memory 
    if (list->arr == NULL)
        return FALSE;
    list->reserved = INITIAL_SIZE_STRING_LIST;
    return TRUE;
    
}


boolean ArrayList_ExpandReserved(ArrayList * list, size_t reserved)
{
    //The reserve is already bigger than desire amount 
    if (reserved < list->reserved)
        return TRUE;
    
    size_t newReserved = reserved;
    void * tmp = realloc(list->arr,newReserved * sizeof(void *));
    if (tmp == NULL)//Operating System did not find any memory 
        return FALSE;
    list->reserved = newReserved;
    list->arr = tmp;
    
    return TRUE;
}

boolean ArrayList_Expand(ArrayList * list)
{
    if (list->size < list->reserved)
        return TRUE;

    return ArrayList_ExpandReserved(list, (list->reserved * 2) + 1) ;
}

/*
boolean ArrayList_Expand(ArrayList * list)
{
    //it returns true if expanded or size not ready to be
    //expanded.
    //Function succesful = TRUE
    //ERROR = False
    if (list->size < list->reserved)
        return TRUE;
    
    size_t newReserved = list->size * 2 + 1;
    void * tmp = realloc(list->arr,newReserved * sizeof(void *));
    if (tmp == NULL)
        return FALSE;
    list->reserved = newReserved;
    list->arr = tmp;
    
    return TRUE;
}
*/

boolean ArrayList_Add(ArrayList * list, void * item)
{
    //we need to check the size
    if (!ArrayList_Expand(list))
        return FALSE;
    //note that we are copying the value.
    //you could do it differently but for
    //our exercise, it makes sense to copy the value.
    //how? strList would need to be a double pointer **
    list->arr[list->size] = (char *)item;
    list->size += 1;
    return TRUE;
}

void * ArrayList_Get(ArrayList *list, size_t index)
{
	if (index >= list->size)
        	return NULL;

    	return list->arr[index];
}


boolean ArrayList_Remove(ArrayList * list, size_t index)
{
	if (index >= list->size || list->arr[index] == NULL)
        	return FALSE ;
    
    	free(list->arr[index]);
    	list->arr[index] = NULL;
         
	return  TRUE;
}


inline void * ArrayList_GetList(ArrayList * list)
{
    return list->arr;
}

boolean ArrayList_InitStruct(ArrayList * list)
{
	list = (ArrayList*) malloc(sizeof(list)) ;

	if (list == NULL)
        	return FALSE; 
    
    	return TRUE;
}

boolean ArrayList_FreeStruct(ArrayList * List)
{
	free(List) ;
	
	return TRUE ;
}

boolean ArrayList_Free(ArrayList * List)
{
	for(int i = 0 ; i < List->size ; i++)
	{
		free(List->arr[i]) ;
	}

	List->size= 0;
    
	return TRUE ;
}

boolean ArrayList_RemoveLast(ArrayList *List)
{
	if(List->arr == NULL) // Not sure if we need this 
	{
		return FALSE ;
	}

	free(List->arr[List->size - 1]);
    	List->arr[List->size - 1] = NULL;

	(List->size)--;


	/*Or this should work 
	ArrayList_Remove(List, List->size - 1)
	(List->size)--;
	*/
	return TRUE ;
}

boolean ArrayList_Set(ArrayList *list, size_t index, void * item)
{
	if(index > list->reserved)
	{
		boolean result = ArrayList_Expand(list);	
		printf("Checking to see if it worked %d\n", result) ;	
	}

        list->arr[index] = item ;
	//printf("Check it again value is %s", list->arr[index]) ;
        return TRUE ;
}

boolean ArrayList_Clear(ArrayList * list)
{
	if(list->size == 0)
	{
		return FALSE ;
	}
	for(int i = list->size-1 ; i >= 0 ; i--)
	{
		ArrayList_Remove(list, i);
	}

	//ArrayList_Compact(list) ;

	return TRUE ;
}

boolean ArrayList_Copy(ArrayList * destination, const ArrayList * source)
{
	
	if(destination->reserved >= source->size)
		destination->size = source->size;
	else
		ArrayList_Expand(destination) ;

	
	for(int i = 0 ; i < source->size; i++)
	{
		destination->arr[i] = source->arr[i] ;
	}
	
	return TRUE ;
}

boolean ArrayList_Compact(ArrayList * list)
{
    if (list->size < list->reserved)
        return TRUE;

    size_t newReserve = list->size + 100 ;
    
    void * tmp = realloc(list->arr, newReserve  * sizeof(void *));
    if (tmp == NULL)
        return FALSE;
    list->reserved = newReserve ;
    list->arr = tmp;
    
    return TRUE;

}


