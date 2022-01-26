#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
int main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = 10;
    head->link = &node;
    node->link = NULL;

    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = 109;
    node->link->link = node;
    node->link = NULL;

    
}
