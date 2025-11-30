//program to reverse secund half of the array

#include<stdio.h>

int main(){
	int arr[8]={1,2,3,4,5,6,7,8}; 

	printf("Original array: ");

	for(int i=0; i<8; i++)
	{
		printf("%d ",arr[i]);
	}
	
	int n=4;

	for(int i=7; i>3;i--)
	{
		if(n<i)
		{
			int temp=arr[i];
			arr[i]=arr[n];
			arr[n]=temp;
			n++;
		}
	}

	printf("\nReverse array: ");

	for(int i=0; i<8; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\n");

	return 0;
}
