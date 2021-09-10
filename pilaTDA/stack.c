#include <stdio.h>
#include <stdlib.h>

#include "IStack.h"

void initializeStack(Stack *stack) {
    *stack = initializeList();
}



void push(Stack *stack) {
    *stack = insertAtFront(*stack);
}

void pop(Stack *stack) {
    *stack = popFirst(*stack);
}

void displayStack(Stack stack) {
    Stack currentNode;
    currentNode = stack;
    if(currentNode != NULL) {
        printf("\nTop .............................................. Base\n\n");
        do {
            printf("| %d ", currentNode->data);
            currentNode = currentNode->nextNode;
        }
        while(currentNode != NULL);
        printf("\nTop .............................................. Base\n\n");
        printf("\n");
    }
    else {
        printf("Stack is empty!\n");
    }

}