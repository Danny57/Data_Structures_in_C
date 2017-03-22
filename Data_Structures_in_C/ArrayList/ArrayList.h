//
//  StringList.h
//  lec2
//
//  Created by Francisco on 6/28/15.
//  Copyright (c) 2015 Francisco. All rights reserved.
//

#ifndef __lec2__StringList__
#define __lec2__StringList__

#include <stdio.h>
#include <stdlib.h> 
#include "String.h"
#include "globalconst.h" 

typedef struct
{
    size_t size;
    size_t reserved;
    void ** arr;
}ArrayList;

typedef ArrayList* ArrayListPtr;

static const int INITIAL_SIZE_STRING_LIST = 400;
//Given By Professor
boolean ArrayList_New(ArrayList * list);
boolean ArrayList_Expand(ArrayList * list);
boolean ArrayList_Add(ArrayList * list, void * item);
void * ArrayList_GetList(ArrayList * list);
inline size_t ArrayList_GetSize(ArrayList * list)
{
    return list->size;
}
void * ArrayList_Get(ArrayList *list, size_t index);
boolean ArrayList_Remove(ArrayList * list, size_t index);

boolean ArrayList_InitStruct(ArrayList * list);//Done
boolean ArrayList_FreeStruct(ArrayList * list);//Done
boolean ArrayList_Free(ArrayList * list);//Done
boolean ArrayList_RemoveLast(ArrayList *list); //remove last item and updates.
boolean ArrayList_Set(ArrayList *list, size_t index, void * item); //it will expand if needed
void * ArrayList_GetCopy(ArrayList * list,size_t index);
boolean ArrayList_Clear(ArrayList * list); //must do compact
boolean ArrayList_Copy(ArrayList * destination, const ArrayList * source);
boolean ArrayList_ExpandReserved(ArrayList * list, size_t reserved);
boolean ArrayList_Compact(ArrayList * list); //it compacts to size + 100 if possible. 

#endif /* defined(__lec2__StringList__) */

