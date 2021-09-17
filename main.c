#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ILinkedList.h"

struct listNode* insertFromFile(char fileName[], struct listNode* list);
void insertIntoFile(char fileName[], struct listNode* list);

int main()
{
    struct listNode* myList = initializeList();
    char fileName[] = "hello2.bin";

    /*myList = insertAtFront(myList);
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

    displayList(myList);*/


    /*EJERCICIO 1 - INSERTAR DATOS DE ARCHIVOS A UNA LISTA*/

    /*srand(time(NULL));

    int i = 0, value = 0, myArray[11];

    FILE* myFile = fopen(fileName, "wb");
    if (myFile) {
        while(i<10) {
            value = rand() % 10;
            fwrite(&value, sizeof(int), 1, myFile);
            printf("%d", value);
            i++;
        }
    }

    fclose(myFile);

    myList = insertFromFile(fileName, myList);

    displayList(myList);*/

    
    /* PRÁCTICA EN CLASE - INSERTAR DATOS DE LISTAS A UN ARCHIVO*/

    myList = insertAtFront(myList, 2);
    myList = insertAtFront(myList, 3);
    myList = insertAtFront(myList, 4);
    myList = insertAtFront(myList, 5);

    insertIntoFile(fileName, myList);

    FILE* file = fopen(fileName, "rb");
    int aux;

    if(file) {
        while(fread(&aux, sizeof(int), 1, file) > 0) {
            printf("\n%d", aux);
        }
        fclose(file);    
    }

    return 0;
}

struct listNode* insertFromFile(char fileName[], struct listNode* list) {
    FILE* file = fopen(fileName, "rb");
    int aux;

    if(file) {
        while(fread(&aux, sizeof(int), 1, file) > 0) {
            list = insertAtFront(list, aux);
        }
        fclose(file);
    }
    return list;
}

void insertIntoFile(char fileName[], struct listNode* list) {
    FILE* file = fopen(fileName, "wb");

    if(file) {
        while(list) {
            fwrite(&list->data, sizeof(int), 1, file);
            list = list->nextNode;
        }
        fclose(file);
    }    
}


