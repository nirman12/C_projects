#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        if (num%1==0 && num%num==0 && num%i==0){
        count++;
        printf("The numbers are%d\n",i);
        }
    }
    if (count>3){
        printf("The number is not prime.");
    }
    else{
        printf("The number is prime.");
    }
    return 0;
}