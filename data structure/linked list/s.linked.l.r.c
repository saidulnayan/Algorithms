#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;

struct node
{
    int data;
    struct node *next;
} *start=NULL,*ptr;

void display();
int create(int);

int main()
{
    int n;
    printf("\nEnter the no of node?\t");
    scanf("%d",&n);
    create(n);
    display(start);
}

int create(int x) {
    if (x == 0)
        return 0;
    else {
        NODE *node;
        node = ((NODE *) malloc(sizeof (NODE)));
        printf("Enter the data:\n");
        scanf("%d", &node->data);
        node->next = NULL;
        if (start == NULL)
        {
            ptr = start = node;
        }
        else {
            //ptr = node->next;
            ptr->next = node;
            ptr = node;
        }
        ptr->next = NULL;
    }
    create(x - 1);
}


void display(NODE *start)
{
    NODE *ds;
    ds=start;
    while(ds!=NULL)
    {
        printf("%d->",ds->data);
        ds=ds->next;
    }
}

