/*
 * C Program to Implement a Queue using an Array
 */
#include <stdio.h>

#define MAX 50

void insertElement(void);
void deleteElement(void);
void display(void);

int queue_array[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertElement();
            break;
        case 2:
            deleteElement();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\n\t EXIT POINT ");
            break;
        default:
            printf("Wrong choice \n");
        } /* End of switch */
    }     /* End of while */
    return 0;
} /* End of main() */

void insertElement()
{
    int add_item;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == -1)
            /*If queue is initially empty */
            front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /* End of insertElement() */

void deleteElement()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /* End of deleteElement() */

void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} /* End of display() */
