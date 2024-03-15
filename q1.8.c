/* Write a program to accept three integer numbers and find its average.*/

#include<stdio.h>
int main()
{
       int a,b,c,avg;
	   printf("Enter the number = \n");
	   scanf("%d%d%d",&a,&b,&c);

	   avg=(a+b+c)/3;
	   printf("Average of the number= %d",avg);

return 0;

}
