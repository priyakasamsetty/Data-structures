// INSERTION AND TRAVERSAL OF BINARY SEARCH TREE

#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *left;
 struct node *right;
	
};struct node *root=NULL;

void insert(int item)
{
 struct node *ptr;
 ptr = (struct node *)malloc(sizeof(struct node));
 struct node *current;
 struct node *parent;
	
 ptr->data=item;
 ptr->left=NULL;
 ptr->right=NULL;
	
 if(root==NULL)
 {
  root = ptr;
 }
 else
 {
  current = root;
  parent = NULL;
  
  while(1)
  {
   parent = current;
   if(item < parent->data)
   {
    current = current->left;
    if(current==NULL)
    {
     parent->left=ptr;
     return;
    }
   }
   else
   {
    current = current->right;
    if(current==NULL)
    {
     parent->right=ptr;
     return;
    }
   }
  }
 }
}

void Inorder(struct node *root)
{
 if(root==NULL)
 return;
 else
 {
  Inorder(root->left);
  printf("%d ",root->data);
  Inorder(root->right);
 }
}

void Preorder(struct node *root)
{
 if(root==NULL)
 return;
 else
 {
  printf("%d ",root->data);
  Preorder(root->left);
  Preorder(root->right);
 }
}

void Postorder(struct node *root)
{
 if(root==NULL)
 return;
 else
 {
  Postorder(root->left);
  Postorder(root->right);
  printf("%d ",root->data);
 }
}

void main()
{
 int a[1000],i,n;
 printf("\nEnter the number of elements:");
 scanf("%d",&n);
 printf("\nEnter the elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  insert(a[i]);
 }
 printf("\nThe Pre order traversal : ");
 Preorder(root);
 printf("\nThe In order traversal : ");
 Inorder(root);
 printf("\nThe Post order traversal: ");
 Postorder(root);
}

/* OUTPUT:
 Enter the number of elements:5

 Enter the elements:
 2 4 1 3 5

 The Pre order traversal : 2 1 4 3 5
 The In order traversal : 1 2 3 4 5
 The Post order traversal: 1 3 5 4 2
 -------------------------------- */  
