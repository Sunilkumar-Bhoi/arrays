//program to find index of an element in an array
#include<stdio.h>

int main(){
    int arr[6] = {4, 7, 2, 9, 1, 5};
    int target = 25;
    int index = -1;
    for(int i=0; i<6; i++){
        if(arr[i]==target){
            printf("Index of %d is %d\n",target,i);
            index++;
        }
    }
    if(index == -1){
        printf("-1\n");
    }
    return 0;
}