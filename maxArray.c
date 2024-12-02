#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter numbers for array: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[2];
    for (int j=0;j<10;j++){
        if (arr[j]>max){
            max=arr[j];
        }
    }
    printf("The maximum number in the array is: %d",max);
    return 0;
}