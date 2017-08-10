#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int ReverseString(char x[]);
int StringLength(char x[]);
int main()
{
    char inputstr[200];
    int i,j;
    puts("Enter the Text:");
    gets(inputstr);
    ReverseString(inputstr);

    for(i=0;inputstr[i]!='\0';i++)
    {
       if(inputstr[i+1]==' ' || inputstr[i+1]==NULL)
       {
           for(j=i;j>=0 && inputstr[j]!=' ';j--)
            printf("%c",inputstr[j]);
	printf(" ");

       }
//       printf(" ");
    }
	printf("\n");
    
}

int ReverseString(char x[])
{
	int i,j=0,n,flag=0;
	n=StringLength(x);
	
	char OutputString[n];
		 

		for(i=n-1; i>=0 ; i--)
		{
		OutputString[j]=x[i];
		j++;
		}
		OutputString[n]='\0';	

		for(i=0; i<=n; i++)
		{
			*(x+i)=OutputString[i];
		}
}

int StringLength(char x[])
{
	int i,count=1;

		for(i=0; x[i]!='\0';i++)
		{
		count++;
		}
	return count-1;
}
