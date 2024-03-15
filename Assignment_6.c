// question 6 Matrix multiplication

#include<stdio.h>

int main(){

    int arr1[2][2];
    int arr2[2][2];

    printf("Enter an elements of arr1\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Enter element at arr1[%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nEnter an elements of arr2\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Enter element at arr2[%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    int mul[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            mul[i][j]=0;    
            for(int k=0;k<2;k++)    
            {    
                mul[i][j]+=arr1[i][k] * arr2[k][j];    
            }    
        }
    }


    printf("\nMultiplication of arr1 and arr2 is \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    
}































