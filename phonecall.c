/*23.Implement queues at phone call system where if two people called the same person at a time the person 
called first is supposed to talk and other person should wait until the first person stops*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
 
int frontelement();
void enq(int data);
void deq();
void display();
void queuesize();
 
int count = 0;
 
void main()
{
    long long int no;
	int ch, e;
    printf("***Phone call  system using Queues");
    printf("\n 1 - Enter phone number ");
    printf("\n 2 - To talk with the person");
    printf("\n 3 - Exit");
    printf("\n 4 - Display list of persons waiting");
    printf("\n 5 - No.of persons waiting\n");

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter phone no : ");
            scanf("%lld", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        /*case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            empty();
            break;*/
        case 3:
            exit(0);
        case 4:
            display();
            break;
        case 5:
            queuesize();
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
 
/* Enqueing the queue */
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
        rear = temp;
    }
    count++;
}
 
/* Displaying the queue elements */
void display()
{
    front1 = front;
    printf("\nPersons waiting to talk are:\n");
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("No persons are waiting yet\n");
        return;
    }
    while (front1 != rear)
    {
        printf("%d \n", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
 
/* Dequeing the queue */
void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display phone numbers from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n %d person who finished talking\n Enter next person", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n %d person who finished talking\n Enter next person", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

/* Returns queue size */
void queuesize()
{
    printf("\n No of persons waiting  to talk : %d", count);
}
