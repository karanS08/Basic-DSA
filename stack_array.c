#include <stdio.h>

// #include<conio.h>

#define N 5

int stack[N];

int top = -1;

void push()

{

    int integer;

    printf("Enter an integer value : ");

    scanf("%d", &integer);

    if (top == N - 1)

    {

        printf("Overflow !!, integer can not be inserted.\n");
    }

    else

    {

        top++;

        stack[top] = integer; //number inserted
    }
}

void pop()

{

    int popedValue;

    if (top == -1)

    {

        printf("Underflow!! ,integer can not be poped.\n");
    }

    else

    {

        popedValue = stack[top];

        top--;

        printf("The poped number is : %d\n", popedValue);
    }
}

void peek()

{

    if (top == -1)

    {

        printf("Stack is empty\n");
    }

    else

    {

        printf("The top most element is %d\n", stack[top]);
    }
}

void display() //traversing in stack

{

    int index;

    for (index = top; index >= 0; index--)

    {

        printf("%d \n", stack[index]);
    }
}

int main()

{
    int choice = 0;
    printf("Enter your choice : 1 for push ,2 for pop ,3 for peek and 4 for display: \n");

    scanf("%d", &choice);

    clrscn();

    while (choice != 0)
    {
        

        {

            switch (choice)

            {

            case 1:
                push();

                break;

            case 2:
                pop();

                break;

            case 3:
                peek();

                break;

            case 4:
                display();

                break;

            default:
                printf("Invalid Choice\n");
            }
        }
    }
}