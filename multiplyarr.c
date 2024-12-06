#include<stdio.h>
int main()
{
    int arr[2][2];
    int arr1[2][2];
    int result[2][2];
    
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("Enter a number for arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("Enter a number for arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            result[i][j]=0;
            for (int k=0;k<2;k++){
                result[i][j]=result[i][j]+arr[i][k]*arr1[k][j];
            }
        }
    }
    printf("The resulting 2x2 matrix after multiplication is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}