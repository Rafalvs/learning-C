#include "linked-list.h"  //test

void insertAtBegin(list *head, int data)
{
  node*new = (node*)malloc(sizeof(node));  //new node
  new->data = data;                        

  if(head->start == NULL)                  //empty list
  {
    new->next = NULL;
    head->start = new;
    head->end = new;
  }
  else                                     //not empty
  {
    new->next = head->start;
    head->start = new;
  }

  head->size++;
}

void insertAtEnd(list *head, int data)
{
  node*new = (node*)malloc(sizeof(node));  //new node

  new->data = data;
  new->next = NULL; 

  if (head->start == NULL)                 //empty list
  {
    head->start = new;
    head->end = new;
  }
  else                                     //not empty
  {
    head->end->next = new;
    head->end = new;
  }

  head->end = new;
}

void printList(list *head)
{
  node*start = head->start;
  printf("size: %d\n", head->size);

  while(start != NULL)
  {
    printf("%d", start->data);
    start = start->next;
  }

  printf  ("\n\n");
}

node*search(node *head, int x)
{
  if(head == NULL || head->data == x)
  {
    return head;
  }
  
  return(search (head->next, x));
}

/* Esta função recebe o endereço p de uma 
 celula de uma lista encadeada e remove 
 da lista a celula p->prox. A função supõe
 que p != NULL e p->prox != NULL. */

void noderem(node *p)
{
   node *lixo;
   lixo = p->next;
   p->next = lixo->next;
   free (lixo);
}


                                            // delete a node
/* void deletenode(list *head, int data)
{
    node*start = head->start;               // pointer to list start
    node*nodeRemover = NULL;                // pointer the node to be removed

    if(start != NULL && head->start->data == data)
    {                                       // remove first node
        nodeRemover = head->start;
        head->start = nodeRemover->next;
        if(head->start == NULL)
        {
            head->end = NULL;
        }
    }
    else                                    // remove mid or last node
    { 
        while(start != NULL && start->next != NULL && start->next->data != data)
        {
          start = start->next;
        }
        if(start != NULL && start->next != NULL)
        {
            nodeRemover = start->next;
            start->next = nodeRemover->next;
            if(start->next == NULL)         // if last node is removed
                head->end = start;
        }
    }
    if(nodeRemover) {
        free(nodeRemover);           
        head->size--;                    
    }
} */