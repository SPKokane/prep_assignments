/*Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)*/
    

#include<stdio.h>
#include<limits.h>

int main()
{
	int ch1 = sizeof(char);
	int uchar = sizeof(unsigned char);
	int sin = sizeof(short int);
	int unsing= sizeof (unsigned short int);
	int int1= sizeof (int);
	int unint1 = sizeof (unsigned int);
	int lint1 = sizeof (long int);
	int unlint1 = sizeof (unsigned long int);
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf("Data type\t\t\tSize\t\t\tFormat Specifier\t\t\tRange\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n");

    printf("char %30d \t\t\t\t%%c %30d to %d\n",ch1, SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char %21d \t\t\t\t%%c \t\t\t\t0 to %d\n",uchar, UCHAR_MAX);
 
    printf("short int %25d \t\t\t\t%%hd %29d to %d\n",sin, SHRT_MIN, SHRT_MAX);
    printf("unsigned short int %16d \t\t\t\t%%hu \t\t\t\t0 to %d\n",unsing, USHRT_MAX);
 
	printf("signed int %24d \t\t\t\t%%d %30d to %d\n",int1, INT_MIN, INT_MAX);
    printf("unsigned int %22d \t\t\t\t%%u \t\t\t\t0 to %u\n",unint1, UINT_MAX);

    printf("signed long int %19d \t\t\t\t%%ld %29ld to %ld\n",lint1, LONG_MIN, LONG_MAX);
	printf("unsigned long int %17d \t\t\t\t%%lu \t\t\t\t0 to %lu\n\n",unlint1, ULONG_MAX);
	return 0;

}
