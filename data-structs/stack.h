#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int size;
    int top;
    int *array;
}
stack;

stack *newStack(int size);
void freeStack(stack *pt);
void push(stack *pt, int x);
int isEmpty(stack *pt);
int pop(stack *pt);
void peek(stack *pt);
stack *addStack(stack *pt);