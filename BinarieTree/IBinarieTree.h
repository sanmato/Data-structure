#ifndef IBINARIETREE_H
#define IBINARIETREE_H

struct treeNode {
    int data;
    struct treeNode* left;
    struct treeNode* right;
};

struct treeNode* initializeTree();
struct treeNode* createTreeNode(int data);
struct treeNode* search(struct treeNode* tree, int data);
struct treeNode* insert(struct treeNode* tree, int data);
void preOrder(struct treeNode* tree);
void inOrder(struct treeNode* tree);
void postOrder(struct treeNode* tree);



#endif //IBINARIETREE