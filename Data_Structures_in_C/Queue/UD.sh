#!/bin/bash

userInput = 7;

while [ $userInput != 0 ] do

echo 'Would user like to run Singly LinkedList? input  1'
echo 'Would user like to run Doubly LinkedList? input  2'
echo 'Would user like to run Stack?             input  3'
echo 'Would user like to run Queue?             input  4'
echo 'Would user like to run HashMap?           input  5'
echo 'Would user like to run ArrayList?         input  6'
echo 'Would user like to exit?			input  0'
read userInput


if [userInput == '1']; then 
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	#printf("The Results: Singly LinkedList \n");
fi


if [userInput == '2']; then 
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	//printf("The Results: Singly LinkedList \n");
fi

if [userInput == '3']; then 
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	//printf("The Results: Stack\n");
fi


if [userInput == '4']; then 
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	//printf("The Results: Queue \n");
fi


if [userInput == '5']; then 
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	//printf("The Results: HashMap \n");
fi


if [userInput == '6']; then 
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	//printf("The Results: Singly LinkedList \n");
fi

done
