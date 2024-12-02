// wap to find the minimum number in an array

#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter numbers for array: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[2];
    for (int j=0;j<10;j++){
        if (arr[j]<min){
            min=arr[j];
        }
    }
    printf("%d",min);
    return 0;
}