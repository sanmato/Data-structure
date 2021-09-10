#ifndef ISTACK_H
#define ISTACK_H

#include "ILinkedList.h"

#define Stack struct listNode*

void initializeStack(Stack *stack);
void push(Stack *stack);
void pop(Stack *stack);
void displayStack(Stack stack);

#endif //ISTACK_H