#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

#define SIZE_HASH_MAP 1000

/*******READ ME Must compile*****/
//Must compile with gcc -std=c99 -Wall HashMap.c -o HashMap -lm
static int hashMapLinear[SIZE_HASH_MAP];                        
int hash(void* x);                                            
void linearInsert(void* x);                            
void linearSearch(void* x);
      
void linearInsert(void* x){
    int probe = hash(x);                                   
    while (hashMapLinear[probe]!=0){                            
        probe = fmod((probe+1),SIZE_HASH_MAP);                  
    }
    hashMapLinear[probe] = *((int*)x);                               
}

void linearSearch(void* x){
    for(int i = 0 ; i < SIZE_HASH_MAP; i++){
        if(hashMapLinear[i]== *((int*)x)){
        printf("Element %d found at index %d\n", hashMapLinear[i], i);
    	}
    }                                             
}

int hash(void* x){
    int hash;
    int c = *((int*)x);
    hash = fmod(c*13123473456,pow(2,8));
    return hash;
}



int main (int argc, char const *argv[]){

    int temp = 0;
    for(int i = 0; i <= 50; i = i + 2){
    temp = i;
    linearInsert((void*)&temp);
    }

    for(int i = 0; i <= SIZE_HASH_MAP; i++){
    temp = i;
    linearSearch((void*)&temp); 
    }
} 
