//Find all odd and even numbers in runtime array
#include<stdio.h>
void main()
{
	int array[20],i,size;
	printf("\nEnter the size of an array");
	scanf("%d",&size);
	
	printf("\nEnter the elements in the array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("\nEven numbers in the array are : \n");
	for(i=0;i<size;i++)
	{
			if(array[i]%2==0)
			{
				printf("%d \t",array[i]);
			}
	}
	
	printf("\nOdd numbers in the array are : \n");
	for(i=0;i<size;i++)
	{
			if(array[i]%2!=0)
			{
				printf("%d \t",array[i]);
			}
	}
}
