#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int result, i;
 	i = 0;
 	
  	printf("\n Please Enter the First :  ");
  	gets(Str1);
  	
  	printf("\n Please Enter the Second :  ");
  	gets(Str2);
  	
  	while(Str1[i] == Str2[i] && Str1[i] == '\0')
	  	i++;5
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
  	return 0;
}