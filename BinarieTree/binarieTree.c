#include<stdio.h>
#include<stdlib.h>

#include "IBinarieTree.h"

struct treeNode* initializeTree() {
    return NULL;
}

struct treeNode* createTreeNode(int data) {
    struct treeNode* currentNode = (struct treeNode*)malloc(sizeof(struct treeNode));

    currentNode->data = data;
    currentNode->left = NULL;
    currentNode->right = NULL;

    return currentNode;
}

struct treeNode* search(struct treeNode* tree, int data) {
    struct treeNode* found = NULL;
    if(tree != NULL) {
        if(data == tree->data) {
            found = tree;
        }
        else {
            if(data > tree->data) {
                found = search(tree->right, data);
            } else {
                found = search(tree->left, data);
            }
        }
    }
    return found;
}

struct treeNode* insert(struct treeNode* tree, int data) {
    if(tree == NULL) {
        tree = createTreeNode(data);
    }
    else {
        if(data > tree->data) {
            tree->right = insert(tree->right, data);
        }
        else {
            tree->left = insert(tree->left, data);
        }
    }
    return tree;
}

void preOrder(struct treeNode* tree) {
    if(tree != NULL) {
        printf("| %d |", tree->data);
        preOrder(tree->left);
        preOrder(tree->right);
    }
}

void inOrder(struct treeNode* tree) {
    if(tree != NULL) {
        inOrder(tree->left);
        printf("| %d |", tree->data);
        inOrder(tree->right);
    }
}

void postOrder(struct treeNode* tree) {
    if(tree != NULL) {
        postOrder(tree->left);
        postOrder(tree->right);
        printf("| %d |", tree->data);
    }
}

