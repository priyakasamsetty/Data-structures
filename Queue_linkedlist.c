#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void insert();  
void delete();  
void display();  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n***OPERATIONS***\n");   
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?\n");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:insert();  
                   break;  
            case 2:delete();  
                   break;  
            case 3:display();  
                   break;  
            case 4:printf("Exiting....."); 
                   exit(0);  
                   break;  
            default:   
                printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void insert()  
{  
    struct node *ptr;  
    int item;     
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr==NULL)   
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value?\n");  
        scanf("%d",&item);
		 ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
        printf("Item inserted\n");
    }
}     
void delete ()  
{  
    struct node *ptr;  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
        ptr = front;  
        front = front -> next;  
        free(ptr);  
    } 
	printf("Item Deleted\n");
}  
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nPrinting values .....\n");  
        while(ptr != NULL)   
        {  
            printf("%d\t",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}    

