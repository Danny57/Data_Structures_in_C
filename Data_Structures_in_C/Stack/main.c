#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#define MAX 100


int main(){

    Stack *s = (Stack*)malloc(sizeof(Stack));

    init(s, sizeof(int), MAX);

    checkEmpty(s);

    push(s, (void *)"A");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"B");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"C");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"D");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"E");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"F");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"G");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"H");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"I");
    printf("Top Element in stack after push: %s\n",(char*)top(s));
    push(s, (void *)"J");
    printf("Top Element in stack after push: %s\n",(char*)top(s));

    printf("Size of stack: %d\n",s->size);

    pop(s);
    printf("Top Element in stack after pop: %s\n",(char*)top(s));
    pop(s);
    printf("Top Element in stack after pop: %s\n",(char*)top(s));
    pop(s);
    printf("Top Element in stack after pop: %s\n",(char*)top(s));
    pop(s);
    printf("Top Element in stack after pop: %s\n",(char*)top(s));

    printf("Size of stack: %d\n",s->size);

    checkEmpty(s);

    printf("Popping the remaining elements\n");
    int i = 0;
    i = s->size;
    for(; i>= 1; i--) {
    pop(s);
    printf("Top Element in stack after pop: %s\n",(char*)top(s));
    }

    printf("Size of stack: %d\n",s->size);
    
    printf("Destroy Stack");
    destroy(s);

    return 0 ;
}

