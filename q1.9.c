/*Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is    
*/

#include<stdio.h>
int main()
{
  float temp_fer,temp_cel;
  printf("Enter the temperature in fahrenheit : ");
  scanf("%f",&temp_fer);
  temp_cel = (temp_fer-32)*5/9;
  printf("\n Temperature in celsius is : %f",temp_cel);


  printf("\n Enter the temperature in celsius : ");
  scanf("%f",&temp_cel);
  temp_fer = (temp_cel*9/5)+32;
  printf("\n Temperature in celsius is : %f",temp_fer);

  return 0;

}
