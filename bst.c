// binary search tree
 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL,*temp,*parent,*current;
void insert()
{
	struct node* temp=(struct node*)malloc(sizeof(struct node)) ;
	int ele;
	printf("Enter element to insert: \n");
	scanf("%d",&ele);
	temp->data= ele;
	temp->left= NULL;
	temp->right=NULL;
	if(root == NULL)
	{
		root = temp;
	}
	else
	{
		current= root;
		while(current != NULL)
		{
			parent = current;
			if(temp->data > current->data)
			{
				current=current->right;
			}
			else
			{
				current=current->left;
			}
		}
		if(parent->data > temp->data)
			{
				parent->left = temp;
			}
		else
		{
			parent->right=temp;
		}
	}
}
void delete()
{
    int ele;
    printf("Enter element to delete: \n");
    scanf("%d",&ele);
    current=root;
    parent=NULL;
    while(current != NULL)
    {
        if(current->data == ele)
        {
            break;
        }
        else
        {
            parent=current;
            if(ele > current->data)
            {
                current=current->right;
            }
            else
            {
                current=current->left;
            }
        }
    }
    if(current == NULL)
    {
        printf("Element not found\n");
    }
    else
    {
        if(current->left == NULL && current->right == NULL)
        {
            if(parent->left == current)
            {
                parent->left=NULL;
            }
            else
            {
                parent->right=NULL;
            }
        }
        else if(current->left == NULL)
        {
            if(parent->left == current)
            {
                parent->left=current->right;
            }
            else
            {
                parent->right=current->right;
            }
        }
        else if(current->right == NULL)
        {
            if(parent->left == current)
            {
                parent->left=current->left;
            }
            else
            {
                parent->right=current->left;
            }
        }
        else
        {
            temp=current->right;
            while(temp->left != NULL)
            {
                temp=temp->left;
            }
            temp->left=current->left;
            if(parent->left == current)
            {
                parent->left=current->right;
            }
            else
            {
                parent->right=current->right;
            }
        }
    }
}


void Display()
{
    struct node *temp=root;
    if(temp == NULL)
    {
        printf("Tree is empty\n");
    }
    else
    {
        printf("Tree is: \n");
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            if(temp->left != NULL)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
    }
    printf("\n");
}
int main()
{
	int choice;
	do
	{
		printf("1.) Insert \n");
		printf("2.) Delete \n");
		printf("3.) Display \n");
		printf("4.) Exit \n");
		printf("Enter choice: \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
			break;
			case 2: delete();
			break;
			case 3: Display();
			break;
			case 4: break;
			default: printf("Wrong Choice!!! \n");
		}
	}while(choice != 4);
}