//program toPrint element and its index

#include<stdio.h>

int main(){
    int arr[4] = {10, 20, 30, 40};
    for(int i=0; i<4; i++){
        printf("index %d -> %d\n", i, arr[i]);
    }

    return 0;
}