#include<stdio.h>

int main(){
    int arr[4]={1,2,3,4};
    printf("before %d\n",arr[2]);
    arr[2]=99;
    printf("after %d\n",arr[2]);
}