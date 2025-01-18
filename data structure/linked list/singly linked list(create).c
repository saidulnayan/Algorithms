#include <stdio.h>
#include <stdlib.h>

 typedef struct node
{
    int data;
    struct node *next;
}node;

display(node *head)
{
    node *tmp;
    tmp = head;
    while(tmp != NULL)
    {
        printf("\t%d->",tmp->data);
        tmp = tmp->next;
    }
}

int main()
{
    node *prev,*head,*p;
    int n,i;
    printf ("number of elements:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++)
    {
        p=(node*)malloc(sizeof(node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
           {
             head=p;
           }
        else
        {
        prev->next=p;
        }
          prev=p;

    }
    printf("\nthe link list is:\n");
    display(head);
    return 0;
}
