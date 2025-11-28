//Find the minimum element in the array

#include<stdio.h>

int main (){
    int arr[5] = {10, 6, 18, 3, 15};
    int min=arr[0];

    for(int i=0; i<5; i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum element in the array is: %d\n", min);
}