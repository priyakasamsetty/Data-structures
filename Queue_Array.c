#include<stdio.h>
#include<stdlib.h>
int q[100],i,n,choice=0,r,f;
void enqueue();
void dequeue();
void display();
void main()
{
	printf("Enter no of elemets in a queue:\n");
	scanf("%d",&n);
	while(choice!=4)
	{
	   printf("\n*****OPERATIONS*****\n");
	   printf("1.Inserting an element\n2.Deleting an element\n3.Displaying the elements\n4.Exit\n");
	   printf("Enter ur choice:\n");
	   scanf("%d",&choice);
	   switch(choice)
	   {
	   	 case 1:enqueue();
	   	        break;
	   	 case 2:dequeue();
	   	        break;
	   	 case 3:display();
	   	        break;
	   	 case 4:exit(0);
	   	        break;
	   	 default:
	   	 	printf("Please enter valid choice");
	   }
	}
}
void enqueue()
{
   int val;
   if(r==n)
   {
   	printf("OVERFLOW\n");
   }
   else
   {
   	printf("enter the value:\n");
   	scanf("%d",&val);
   	r=r+1;
   	q[r]=val;
   	printf("Item inserted\n");
   }
}
void dequeue()
{
	if(f==-1)
	{
		printf("UNDERFLOW\n");
	}
	else
	{
		f=f+1;
		printf("Item deleted\n");
	}
}
void display()
{
	if(f==-1)
	{
		printf("Queue is empty");
	}
	else
	printf("printing queue elements...\n");
	for(i=f+1;i<=r;i++)
	{
		printf("%d\t",q[i]);
    }
}

