//Find the maximum element in an array

#include<stdio.h>

int main(){
    int arr[7] = {2, 8, 1, 9, 4, 7, 3};
    int  max=arr[0];

    for(int i=0; i<7; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    printf("The maximum element in the array is: %d\n", max);
}