//question 12 : strig reverse

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],temp;
	int i=0,j=0;
	printf("enter string : ");
	scanf("%s",str1);
	j=strlen(str1)-1;
	while(i<j)
	{
		temp = str1[j];
		str1[j]=str1[i];
		str1[i]=temp;
		i++;
		j--;
	}
		printf("reverse stinrg is : %s ",str1);
		return 0;	
}
