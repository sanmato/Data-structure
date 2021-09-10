#include <stdio.h>
#include <stdlib.h>
#include "IStack.h"


int main()
{
    Stack myStack;

    initializeStack(&myStack);

    push(&myStack);
    system("pause");
    push(&myStack);
    system("pause");
    push(&myStack);
    system("pause");
    push(&myStack);
    system("pause");

    displayStack(myStack);

    pop(&myStack);

    system("pause");

    displayStack(myStack);

    

    return 0;
}