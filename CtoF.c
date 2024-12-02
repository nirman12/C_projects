#include<stdio.h>
int main(){
    float celcius;
    float farenheit;

    printf("Enter temperature in celcius: ");
    scanf("%f",&celcius);

    farenheit=(celcius*9/5)+32;
    printf("The celcius converted to farenheit is: %f.F",farenheit);
    return 0;
}