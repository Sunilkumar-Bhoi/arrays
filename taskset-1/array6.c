#include<stdio.h>

int main(){
    int arr[3]={1,2,5};
    int result = arr[0] + arr[1] * arr[2];

    printf("%d\n", result);
    return 0;
}