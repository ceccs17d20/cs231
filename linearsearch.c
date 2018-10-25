#include<stdio.h>
void main()
{
	int n,i,x,A[50],f=0;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
		{
			scanf("%d",&A[i]);
		}
	printf("Enter the element to be searched");
	scanf("%d",&x);
	for(i=0;i<n;i++)
		{if(A[i]==x)
			{f=1;}
		
		}
	
	if(f==1)
	{printf("element found at %d",i-1);}
	
	else
	{printf("not found");}
}

