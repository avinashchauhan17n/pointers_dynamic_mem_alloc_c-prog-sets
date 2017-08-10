/* 5 ) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.

eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5

output : kerraaya */ 

#include<stdio.h>
#include<stdlib.h>

char * compare(char*,char*,int,int);

int main()
{
	char *str1="Kernel masters";
	char *str2="raayan systems";
	
	char *output=compare(str1,str2,3,5); 	
	printf("%s\n",output);
}

char *compare(char * a , char * b, int a1 , int b1)
{
	int n= a1+b1;
	char * buffer= (char*)malloc((n*sizeof(char))+1);
	int i,ac=0,bc=0;
	for(i=0;i<n;i++)
	{	
		if(ac<a1) 
		*(buffer+i)=*(a+ (ac++) );
		else 
		*(buffer+i)=*(b + (bc++)) ;
	}

return buffer;




}
