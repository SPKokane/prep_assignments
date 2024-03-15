// Problem-3.1 : Fibonacci series using non recursive approach

#include<stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    int num1 = 0;
    int num2 = 1;
    int num3;

    printf("The list of first %d terms in the Fibonacci Sequence : ", n);
    printf("%d %d ", num1, num2);
    
    for(int i=3; i<=n; i++){
        num3 = num1+num2;
        printf("%d ", num3);
        num1 = num2;
        num2 = num3;
    }
}
































