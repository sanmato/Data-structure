#ifndef IDOUBLELINKEDLIST_H
#define IDOUBLELINKEDLIST_H

typedef struct {
    int data;

    struct doubleListNode* previousNode;
    struct doubleListNode* nextNode;   
}doubleListNode;

doubleListNode* initializeDoubleList();
doubleListNode* createDoubleNode(int data);
doubleListNode* insertAtFirstInDoubleList(doubleListNode* list, doubleListNode* newNode);
void showNode(doubleListNode* node);
void iterateAndShowList(doubleListNode* list);
doubleListNode* searchLastDoubleNodeInIterative(doubleListNode* list);
doubleListNode* searchLastDoubleNodeInRecursive(doubleListNode* list);
doubleListNode* insertAtLastInDoubleList(doubleListNode* list, doubleListNode* newNode);
doubleListNode* insertInOrderInDoubleList(doubleListNode* list, doubleListNode newNode);
doubleListNode* deleteNodeByValue(int data, doubleListNode* list);


#endif //IDOUBLELINKEDLIST_H