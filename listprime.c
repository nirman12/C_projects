#include<stdio.h>
int main(){
    for (int i=0;i<=3;i++){
        for (int j=0;j<=3;j++){
            if (i%1==0 && i%i==0 && i%j!=0){
                printf("%d",i);
            }
        }
    }
    return 0;
}