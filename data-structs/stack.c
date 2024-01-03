#include "stack.h"

stack *newStack(int size)
{
    stack *pt = malloc(sizeof(stack));
    pt->size = size;
    pt->top = 0;
    pt->array = malloc(size * sizeof(int));

    if(pt->array == NULL)
    {
        return NULL;
    }

    return pt;
}

void freeStack(stack *pt)
{
    free(pt->array);
    free(pt);
}

void push(stack *pt, int x)
{
    if(pt->top == pt->size)
    {
        addStack(pt);
    }
    pt->array[pt->top] = x;
    pt->top ++;
}

int isEmpty(stack *pt)
{
    return(pt->top == 0);    
}

int pop(stack *pt)
{
    if(!isEmpty(pt))
    {
        pt->top --;
    }

    return(pt->array[pt->top]);
}


void peek(stack *pt)
{
    printf("Stack: ");
    int i;
    i = 0;

    while(i < pt->top)
    {
        printf("%d ", pt->array[i]);
        i++;
    }

    printf("\n");
}

stack *addStack(stack *pt)
{
    stack *p1 = newStack(pt->size * 2); 
    int i;
    i = 0;
    
    while(i < pt->top)
    {
        p1->array[i] = pt->array[i];
        p1->top = pt->top;
        i++;
    }

    freeStack(pt);
    return(p1);
}

/* test

#include "stack.c"
#include <stdio.h>

int main (void)
{
    stack *r = newStack(10);
    int f, l;
    f = 4;
    l = 1;

    push(r , f);
    peek(r);

    push(r, l);
    peek(r);

    pop(r);
    peek(r);

    freeStack(r);
}
*/