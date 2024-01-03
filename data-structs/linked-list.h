#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
    struct node*next;
} node;

typedef struct
{
    node*start, *end;
    int size;
} list;

void insertAtBegin(list *head, int data);
void insertAtEnd(list *head, int data);
void printList(list *head);
node*search(node *head, int x);
void noderem(node *p);