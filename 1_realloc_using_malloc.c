/* realloc using malloc */

#include<stdio.h>
#include<stdlib.h>
void * calloc_using_malloc(long unsigned a,int Number);
int main()
{
char * pt = (char *) realloc_using_malloc(sizeof(int),10);
pt="hello my name is avinash singh";

printf("%s\t %p\n",pt,pt);
}

void * calloc_using_malloc(long unsigned a ,int Number)
{
	void * ptr = malloc(a*Number); 
	int i,j;
	
	for(i=0; i< a*Number;i++)
	printf("add %p \t",ptr+i);
//	ptr[i]= 0;           		  // alternate we can set memory to zero using memset but not covered of now;
	return ptr;
}
