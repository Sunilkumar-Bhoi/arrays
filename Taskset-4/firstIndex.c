//program to find first index of an element in an array
#include <stdio.h>

int main(){
    int arr[7] = {5, 9, 5, 2, 5, 7, 5};
    int target=5;

    for(int i=0; i<7; i++){
        if(arr[i]==target){
            printf("First index of %d is: %d\n", target, i);
            break;
        }
    }
    return 0;
}