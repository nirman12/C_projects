#include<stdio.h>
#include<math.h>
int main(){
    int choice=0;
    int firstNUm;
    int secondNUm;
    int result;
    

    while (choice<7){
        printf("\n-------------------\n");
        printf("Welcome to Simple Calculator\n\n");

        printf("Choose one of the following options:\n1. Add\n2. Substract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");

        printf("Now, enter your choice in number:");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                printf("\n\nEnter first number:");
                scanf("%d",&firstNUm);
                printf("Enter second number:");
                scanf("%d",&secondNUm);
                result=firstNUm+secondNUm;
                printf("Result of the operation is:%d",result);

                break;
            case 2:
                printf("\n\nEnter first number:");
                scanf("%d",&firstNUm);
                printf("Enter second number:");
                scanf("%d",&secondNUm);
                result=firstNUm-secondNUm;
                printf("Result of the operation is:%d",result);

                break;
            case 3:
                printf("\n\nEnter first number:");
                scanf("%d",&firstNUm);
                printf("Enter second number:");
                scanf("%d",&secondNUm);
                result=firstNUm*secondNUm;
                printf("Result of the operation is:%d",result);

                break;
            case 4:
                printf("\n\nEnter first number:");
                scanf("%d",&firstNUm);
                printf("Enter second number:");
                scanf("%d",&secondNUm);
                result=firstNUm/secondNUm;
                printf("Result of the operation is:%d",result);

                break;
            case 5:
                printf("\n\nEnter first number:");
                scanf("%d",&firstNUm);
                printf("Enter second number:");
                scanf("%d",&secondNUm);
                result=firstNUm%secondNUm;
                printf("Result of the operation is:%d",result);

                break;
            case 6:
                printf("\n\nEnter first number:");
                scanf("%d",&firstNUm);
                printf("Enter second number:");
                scanf("%d",&secondNUm);
                result=pow(firstNUm,secondNUm);
                printf("Result of the operation is:%d",result);
                break;
            case 7:
                choice++;
                break;
        }
    }
    return 0;
}