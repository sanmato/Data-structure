#include<stdio.h>
#include<stdlib.h>

#include"IBinarieTree.h"

int main() {
    int array[10] = {10, 2, 45, 9, 1, 15, 46, 33, 25, 20};

    struct treeNode* myTree = initializeTree();
    for(int i=0; i<10; i++) {
        myTree = insert(myTree, array[i]);
    }

    printf("PREORDER: ");
    preOrder(myTree);

    printf("\n");

    printf("INORDER: ");
    inOrder(myTree);

    printf("\n");

    printf("POSTORDER: ");
    postOrder(myTree);

    

    /*
            10
        2           45
    1       9   15      46
                    33
                 25
            20
              
    */

    return 0;
}


