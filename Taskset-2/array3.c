//program to print how many value are greater than 10 in an array
#include<stdio.h>
int main(){
    int arr[6] = {1, 11, 5, 20, 8, 15};
    int count=0;
    for (int i=0; i<6; i++){
        if(arr[i]>10){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}