#include<stdio.h>
int main(){
    int arr[10];
    int count=0;
    printf("Enter numbers for an array: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    int to_find=5;
    for (int j=0;j<10;j++){
        if (arr[j]==to_find){
            count++;
        }
    }
    printf("The occurance of the number to be found is :%d",count);
    return 0;
}