//program to print array in reverse

#include<stdio.h>

int main(){
	int arr[5]={3,6,9,12,15};

	printf("Array in reverse order\n");

	for(int i=4; i>=0; i--){
		printf("%d\n",arr[i]);
	}
	return 0;
}
