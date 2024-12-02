#include<stdio.h>
int main(){
    int nums;
    printf("Enter the number of element in the array: ");
    scanf("%d",&nums);
    int arr[nums];
    int sum=0;

    printf("Enter the elements for array: ");
    for (int i=0;i<nums;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<nums;i++){
        sum=sum+arr[i];
    }
    printf("The sum of elements inside of the array is: %d",sum);
    return 0;
}