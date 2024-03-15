// question 5  Character check

#include<stdio.h>

int main(){

    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch>=65 && ch<=90){
        printf("%c is an Uppercase Alphabet", ch);
    }
    else if(ch>=97 && ch<=122){
        printf("%c is a Lowercase Alphabet", ch);
    }
    else if(ch>=48 && ch<=57){
        printf("%c is a Numeric Digit", ch);
    }
    else{
        printf("%c is an other special character", ch);
    }
  }























