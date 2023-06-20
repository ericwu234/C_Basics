#ifndef OUR_LIST
#define OUR_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    char *str;
    Node *next;
};

typedef struct list List;
struct list{
    int length;
    Node *Head_node;
    Node *Tail_node;
};

List* newList(void);
List* appendTo(List *list,void *obj);                    //append string
List* insertTo(List *list,void *obj,int index);          //insert to index left
char* getIndexStr(List *list,int index);                 //Get index string
char* pop(List *list);                                   //Get Tail string and remove it
int listLen(List* list);                                 //Get list length  
#endif
