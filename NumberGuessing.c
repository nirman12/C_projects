#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int userNum;
    int count=0;
    int loop=0;

    srand(time(NULL));//initialization, should only be called once;
    int machineNum=rand() % 100 + 1;
    // printf("%d",machineNum);

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