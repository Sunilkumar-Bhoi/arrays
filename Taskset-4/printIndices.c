//program to print all indices of an element in an array
#include<stdio.h>

int main(){
    int arr[8] = {3, 7, 3, 9, 3, 4, 3, 8};
    int target = 3;

    for(int i=0; i<8; i++){
        if(arr[i]==target){
            printf("%d, ",i);
        }
    }
    printf("\n");
    return 0;
}