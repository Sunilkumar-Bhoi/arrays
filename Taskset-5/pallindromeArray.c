#include<stdio.h>

int main(){
	int arr[5]={3,7,9,7,3};

	int n=4;
	int ispal=1;

	for(int i=0; i<3; i++){
		if(!(arr[i]==arr[n-i])){
			printf("Not pallindrom\n");
			ispal=0;
			break;
		}
	}
	if(ispal){
		printf("Pallindrom\n");
	}
	return 0;
}
