#include<stdio.h>
#include<stdlib.h>

#include"IDoubleLinkedList.h"

doubleListNode* initializeDoubleList() {
    return NULL;
}

doubleListNode* createDoubleNode(int data) {
    doubleListNode* newNode = (doubleListNode*)malloc(sizeof(doubleListNode));
    newNode->data = data;

    newNode->previousNode = NULL;
    newNode->nextNode = NULL;

    return newNode;
}

doubleListNode* insertAtFirstInDoubleList(doubleListNode* list, doubleListNode* newNode) {
    newNode->nextNode = list;
    if(list != NULL) 
        list->previousNode = newNode;
    return newNode;
}

void showNode(doubleListNode* node) {
    printf("Data: %d \n", node->data);
}
void iterateAndShowList(doubleListNode* list) {
    doubleListNode* currentNode = list;

    while(currentNode != NULL) {
        showNode(currentNode);
        currentNode = currentNode->nextNode;
    }
}

doubleListNode* searchLastDoubleNodeInIterative(doubleListNode* list) {
    doubleListNode* foundNode = list;
    if(list != NULL) {
        while(foundNode->nextNode != NULL) {
            foundNode = foundNode->nextNode;
        }
    }
    return foundNode;
}

doubleListNode* searchLastDoubleNodeInRecursive(doubleListNode* list) {
    doubleListNode* foundNode;

    if(list = NULL) {
        foundNode = NULL;
    }
    else {
        if(list->nextNode == NULL) {
            foundNode = list;
        }
        else {
            foundNode = searchLastDoubleNodeInRecursive(list->nextNode);
        }
    }
    return foundNode;
}

doubleListNode* insertAtLastInDoubleList(doubleListNode* list, doubleListNode* newNode) {
    if(list == NULL) {
        list = newNode;
    } else {
        doubleListNode* lastNode = searchLastDoubleNodeInIterative(list);
        lastNode->nextNode = newNode;
        newNode->previousNode = lastNode;
    }
    return list;
}

doubleListNode* insertNodeInOrder(doubleListNode* list, doubleListNode* newNode) {
    if(list == NULL) {
        list = newNode;
    }
    else {
        if(newNode->data < list->data) {
            list = insertAtFirstInDoubleList(list, newNode);
        }
        else {
            doubleListNode* currentNode = list->nextNode;
            doubleListNode* previous = list;
            while(currentNode != NULL && newNode->data > currentNode->data) {
                previous = currentNode;
                currentNode = currentNode->nextNode;
            }
            previous->nextNode = newNode;
            newNode->previousNode = previous;
            newNode->nextNode = currentNode;
            if(currentNode != NULL) {
                currentNode->previousNode = newNode;
            }
        }
    }
    return list;
}

doubleListNode* deleteNodeByValue(int data, doubleListNode* list) {
    doubleListNode* currentNode;
    if(list != NULL) {
        if(list->data == data) {
            doubleListNode* toDelete = list;
            list = list->nextNode;
            if(list != NULL) {
                list->previousNode = NULL;
            }
            free(toDelete);
        }
        else {
            currentNode = list->nextNode;
            while((currentNode != NULL) && currentNode->data != data) {
                currentNode = currentNode->nextNode;
            }
            if(currentNode != NULL) {
                doubleListNode* previous = currentNode->previousNode;
                previous->nextNode = currentNode->nextNode;
                if(currentNode->nextNode) {
                    doubleListNode* next = currentNode->nextNode;
                    next = previous->nextNode;
                }
                free(currentNode);
            }
        }
    }
    return list;
}