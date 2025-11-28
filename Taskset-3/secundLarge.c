//Find second largest element in array

#include<stdio.h>

int main(){
    int arr[6] = {12, 18, 19, 15, 9, 20};
    int first=arr[0],secund;
    for(int i=0; i<6; i++){
        if(arr[i]>first){
            secund=first;
            first=arr[i];
        }
    }   
    printf("The largest element in the array is: %d\n", secund);
    return 0;
}