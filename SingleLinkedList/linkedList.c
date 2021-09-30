#include <stdlib.h>
#include <stdio.h>

#include "ILinkedList.h"

struct listNode* initializeList() {
    return NULL;
}

struct listNode* addNode(int data) {
    struct listNode* newNode;
    newNode = (struct listNode*)malloc(sizeof(struct listNode));
    if(newNode == NULL) {
        exit(0);
    }
    newNode->data = data;
    newNode->nextNode = NULL;

    return newNode;
}

int isEmpty(struct listNode *list) {
    return list == NULL ? 1 : 0;
}

struct listNode* insert(struct listNode *list, struct listNode *newNode) {
    if(list == NULL) {
        list = newNode;
    } else {
        newNode->nextNode = list;
        list = newNode;
    }
    return list;
}

struct listNode* insertAtFront(struct listNode* list, int data) {
    struct listNode* newListNode;

    /*printf("\nInsert element: ");
    scanf("%d", &data);*/

    newListNode = addNode(data);

    list = insert(list, newListNode);

    return list;
}


struct listNode* popFirst(struct listNode* list) {
    struct listNode* tempNode = list;
        list = list->nextNode;
        free(tempNode);
    return list;
}

struct listNode* popLast(struct listNode* list) {
    if(list == NULL) {
        return NULL;
    }
    if(list->nextNode == NULL) {
        free(list);
        return NULL;
    }

    struct listNode* currentNode = list;
    while(currentNode->nextNode->nextNode != NULL) {
        currentNode = currentNode->nextNode;
    }

    free(currentNode->nextNode);

    currentNode->nextNode = NULL;

    return list;
}

void displayList(struct listNode* list) {
    struct listNode *currentNode;
    currentNode = list;
    if(currentNode != NULL) {
        printf("\nElements in the list..............................................\n\n");
        do {
            printf("| %d ", currentNode->data);
            currentNode = currentNode->nextNode;
        }
        while(currentNode != NULL);
        printf("\n");
        printf("\nElements in the list..............................................\n\n");
        printf("\n");
    }
    else {
        printf("List is empty!\n");
    }

}