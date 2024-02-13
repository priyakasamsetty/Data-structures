#include<stdio.h>
void main()
{
	int i,n,m,a[10];
	printf("Enter the no of elements to be inserted:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&m);
	if(a[i]==m)
	{
		printf("The element is found");
	}
	else
		printf("Element not found");
}
