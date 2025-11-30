//Reverse only the first half of the array
#include<stdio.h>

int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};

    printf("Original array: ");
    for(int i=0; i<7;i++)
    {
        printf("%d ", arr[i]);
    }

    int n=3;

    for(int i=0; i<3;i++)
    {
        if(i<n){
            int temp=arr[i];
            arr[i]=arr[n];
            arr[n]=temp;
            n--;
        }
    }

     printf("\nHalf reverse array: ");
    for(int i=0; i<7;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}