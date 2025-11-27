#include<stdio.h>

int main(){
    int arr[5]={5,10,15,20,25};
     for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    arr[0]=100;
    arr[2]=200;
    arr[4]=300;
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}