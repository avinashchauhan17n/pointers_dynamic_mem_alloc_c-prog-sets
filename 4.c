/* Create a dynamic array of students structure. Fill data from user input. Search for a particular student using ID and print his details back. */

#include<stdio.h>
#include<stdlib.h>
#define size 3

struct student
{
int id;
char name[50];
int marks;
};

int main()
{
	struct student st[size];
	struct student *ptr;
  	ptr= (struct student *)calloc(sizeof(struct student),size);
	if(ptr)
	{	int i=0;
		for(i=0;i<size;i++)
		{
		printf("enter student %d id\n",i+1);
		scanf("%d",&(ptr+i)->id);
		printf("enter student %d name\n",i+1);
         	scanf("%s[^\n]",(ptr+i)->name);
		printf("enter student %d marks\n",i+1);
                scanf("%d",&(ptr+i)->marks);
		}
	}
	else
	{
		printf("heap memory not allocated\n");
		exit(1);
		
	}	int i;
                for(i=0;i<size;i++)
                {
                printf("student %d id %d\n",i+1,(ptr+i)->id);
                printf("student %d name %s\n",i+1,(ptr+i)->name);
                printf("student %d marks %d\n",i+1,(ptr+i)->marks);
		printf("\n\n");
                }
	
	free(ptr);

}
