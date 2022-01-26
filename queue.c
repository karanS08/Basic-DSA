//queue using linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;
void enqueue(int x)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}
void dequeue(int x)
{

    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        if (front == rear)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            front = front->next;
        }
        printf("%d is deleted\n", temp->data);
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = front;
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("\n \n");
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n \n");
    }
}

int main()
{
    int i,x,j = 0;
    while(j == 0)
    {
    printf("select option : \n1) enqueue \n2) dequeue \n3) display \n4) exit\n")    ;
    scanf("%d", &i);
    switch (i)

    {
    case 1:
       printf("enter the element to be enqueued\n");
        scanf(" %d", &x);
        enqueue(x);
        break;
        
    case 2:
       printf("enter the element to be dequeued\n");
        scanf("%d", &x);
        dequeue(x);
        break;

     
    case 3:

        display();
        break;
    case 4:
    j = 1;
    break;    
    }
    
    }
    return 0;
}
