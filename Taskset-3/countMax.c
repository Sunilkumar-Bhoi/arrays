//prgram to count max number ocuureance in an array
#include<stdio.h>

int main(){
    int arr[8] = {4, 9, 2, 9, 1, 9, 5, 6};
    int max= arr[0];

    for( int i=0; i<8; i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    int count = 0;
    for(int i=0; i<8; i++){
        if(arr[i]==max){
            count++;
        }
    }
    printf("The maximum element is %d and it occurs %d times in the array.\n", max, count);
}