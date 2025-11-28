//find both max and min in the array in one pass

#include<stdio.h>

int main(){
	int arr[6]={5,1,9,2,7,8};
	int max=arr[0],min=arr[0];

	for (int i=0; i<6; i++){
		if (arr[i]<min){
			min=arr[i];
		}		
		if (arr[i]>max){
			max=arr[i];
		}
	}
	
	printf("MAX= %d, MIN= %d\n",max,min);

	return 0;
}
