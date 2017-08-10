/*  Create a dynamic array of integers. Take input from user , sort the array and display the output. */

#include<stdio.h>
#include<stdlib.h>

void sorting(int *array,int size);

int main()
{	
	int size=5;
	int *buffer= (int*) malloc(sizeof(int)*size);
	int i,j;
	
	for(i=0;i<size;i++)
	{
	printf("enter array[%d] element\n",i);
	scanf("%d",(buffer+i));
	}
	
	for(i=0;i<size;i++)
	printf("%d\t",*(buffer+i));

	sorting(buffer,size);
	
	printf("\nafter sorting\n");
	for(i=0;i<size;i++)
        printf(" %d\t",*(buffer+i));
	
	printf("\n");
	
	free(buffer);
}

void sorting(int *array,int size)
{	int i,j,tmp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{	
			if( *(array+i) > *(array+j) )
			{
				tmp=*(array+i);
				*(array+i)=*(array+j);
				*(array+j)=tmp;
			}
		}
	}

}















