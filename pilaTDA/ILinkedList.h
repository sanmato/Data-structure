#ifndef ILINKEDLIST_H
#define ILINKEDLIST_H

struct listNode{
    int data;
    struct listNode *nextNode;
};

struct listNode* initializeList();
struct listNode* addNode(int data);
int isEmpty(struct listNode *list);
struct listNode* insert(struct listNode *list, struct listNode *newNode);
struct listNode* insertAtFront(struct listNode* list);
struct listNode* insertAtEnd(struct listNode* list);
struct listNode* insertAtPos(struct listNode* list);
struct listNode* searchAtPos(struct listNode* list);
struct listNode* popFirst(struct listNode* list);
struct listNode* popLast(struct listNode* list);
void displayList(struct listNode* list);
void loadListFromUser(struct listNode *list);

#endif //ILINKEDLIST_H