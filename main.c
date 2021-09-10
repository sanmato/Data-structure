#include <stdio.h>
#include <stdlib.h>

#include "ILinkedList.h"

int main()
{
    struct listNode* myList = initializeList();

    myList = insertAtFront(myList);
    system("pause");
    myList = insertAtFront(myList);
    system("pause");
    myList = insertAtFront(myList);
    system("pause");
    myList = insertAtFront(myList);
    system("pause");

    displayList(myList);

    myList = popFirst(myList);

    displayList(myList);

    system("pause");

    myList = popLast(myList);

    displayList(myList);

    return 0;
}
