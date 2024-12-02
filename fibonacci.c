#include<stdio.h>
int main(){
    int num;
    printf("Enter the number till which you want the output: ");
    scanf("%d",&num);
    int a=0,b=1;
    int fib=0;
    for (int i=0;i<num;i++){
        if (i==0){
            printf("The series you desired is {");
        }
        fib=fib+a;
        a=b;
        b=fib;
        printf("%d",fib);
        if (i<num-1){
            printf(",");
        }
    }
    printf("}");
    return 0;
}