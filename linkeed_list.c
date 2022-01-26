#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};



void displayList(struct node *p) {
   struct node *temp;
   
   printf("elements of list are : \n ");
   temp = p;
   while (temp != NULL) {
      printf("The orignal data in linked list is  = %d\n ", temp->data);
      int multiply = temp->data;
      printf("The data after multiplying 10 is %d ", multiply*10);
      temp = temp->link;
   }
   printf("\n");
}

int count(int x , struct node *p){
    int tem = 0;
    struct node *list ;
    list = p;
    while (list != NULL){
        if (list->data == x){
            tem=tem+1;
        };
        list = list->link;
        
    }
    printf("The number %d occured %d times ",x , tem);

}


int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 60;
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 80;
    current->link = NULL;
    head->link = current;

    current= (struct node *)malloc(sizeof(struct node));
    current->data =60;
    current->link =NULL;
    head->link->link= current ;
    head->link->link->link;
    
    count(60,head);

    return 0;
}


