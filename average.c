#include<stdio.h>
int main(){
    int nums;
    printf("Enter the number of elements for an array: ");
    scanf("%d",&nums);
    int arr[nums];
    float sum=0.0;
    float average;
    printf("Enter elements for the array: ");
    for (int i=0;i<nums;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<nums;i++){
        sum=sum+arr[i];
    }
    average=sum/nums;
    printf("The average of elements inside of the array is: %.2f",average);
}