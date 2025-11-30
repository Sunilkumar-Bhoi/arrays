#include<stdio.h>
int main(){
	int arr[7]={5,3,8,9,6,1,4};
	
	printf("Original array: ");
	for(int i=0; i<7; i++)
	{
		printf("%d ",arr[i]);
	}
	
	int n=2;

	for(int i=0; i<3; i++)
	{
		if(n>i)
		{
			int temp=arr[i];
			arr[i]=arr[n];
			arr[n]=temp;
			n--;
		}
	}

	printf("\nReverse array: ");
	
	for(int i=0; i<7; i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n");

	return 0;
}
