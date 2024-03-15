
// Problem-1 : Maximum of numbers

#include<stdio.h>

int main(){

    printf("How many numbers you want to enter? \n => ");

    int n;
    scanf("%d", &n);

    printf("Enter numbers: ");

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }

    printf("Max number is : %d", max);

}
