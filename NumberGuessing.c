#include<stdio.h>
int main(){
    int userNum;
    int count=0;
    int loop=0;
    int machineNum=53;
    printf("Welcome to the world of Guessing Numbers.\n\n");
    while (loop<1){
        printf("Please enter your Guess between(1 to 100): ");
        scanf("%d",&userNum);
        count++;

        if (userNum==machineNum){
            printf("Congratulations !!!You have successfully guessed the Number in %d attempts\nBye bye, Thanks for Playing.",count);
            loop++;
        }
        else if(userNum<machineNum){
            printf("Guess a larger number.\n\n");
        }
        else if(userNum>machineNum){
            printf("Guess a smaller number.\n\n");
        }
    }   
    return 0;
}