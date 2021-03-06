#!/bin/bash


while [ 1 ] 
do


echo 'Would user like to run Singly LinkedList? input  1
Would user like to run Doubly LinkedList? input  2
Would user like to run Stack?             input  3 
Would user like to run Queue?             input  4
Would user like to run HashMap?           input  5
Would user like to run ArrayList?         input  6
Would user like to exit?		  input  0'

read userInput

if [ "$userInput" == "1" ]; then 
	cd SLinkedList
	gcc -std=c99 -Wall LinkedList.c main.c -o LinkedList && ./LinkedList
	cd ..
fi


if [ "$userInput" == "2" ]; then 
	cd DLinkedList
	gcc -std=c99 -Wall DLinkedList.c main.c -o DLinkedList && ./DLinkedList
	cd ..
fi

if [ "$userInput" == "3" ]; then 
	cd Stack
	gcc -std=c99 -Wall Stack.c main.c -o Stack && ./Stack
	cd ..
fi


if [ "$userInput" == "4" ]; then 
	cd Queue
	gcc -std=c99 -Wall Queue.c main.c -o Queue && ./Queue
	cd ..
fi


if [ "$userInput" == "5" ]; then 
	cd HashMap
	gcc -std=c99 -Wall HashMap.c -lm -o HashMap && ./HashMap
	cd ..
fi


if [ "$userInput" == "6" ]; then 
	cd ArrayList
	gcc -std=c99 -Wall ArrayList.c main.c -o ArrayList && ./ArrayList
	cd ..
fi

if [ "$userInput" == "0" ]; then 
	exit
fi

done
