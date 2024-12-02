#include<stdio.h>
int main(){
    int arr[10];
    printf("Enter numbers for the array: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("{");
    for (int i=9;i>=0;--i){
        printf("%d,",arr[i]);
    }
    printf("}");
    return 0;
}