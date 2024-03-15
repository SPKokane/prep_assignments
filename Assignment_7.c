// question 7  Table of a number

#include<stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
     
    int i=0;
    while(i<=10){
        printf("%d X %d = %d \n", n, i, n*i);
        i++;
    }
}































