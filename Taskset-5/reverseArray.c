// program to reverse an array without using another array

#include<stdio.h>

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int end = 5;
    printf("Original array: ");
    for(int i=0; i<6;i++){
        printf("%d ", arr[i]);
    }

    for(int i=0; i<6;i++){
        if(i < end){
            int temp=arr[i];
            arr[i]=arr[end];
            arr[end]=temp;
            end--;
        }
    }

    printf("\nReversed array: ");
    for(int i=0; i<6;i++){  
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}