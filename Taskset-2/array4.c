//program to calculate the sum of elements in an array
#include<stdio.h>
int main(){
    int arr[4] = {4, 7, 1, 3};
    int sum=0;
    for (int i=0; i<4; i++){
        sum += arr[i];
    }       

    printf("%d\n", sum);

    return 0;
}