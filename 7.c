/*  
	Device driver implementation using Dynamic Memory Allocation.

char buffer of size 65535 // need to be created as a dynamic string in init.

write 3 functions 

- init() - creates dynamic memory for 65535 characters and returns character pointer. store the character pointer in a global variable.

- int write(char *p,int n) - writes n number of characters from string p, into buffer. Return number of bytes written,incase of success. 

- int read(char *p,int n) - reads n number of characters from buffer and puts in character array p (char array sent as argument to read function). Return number of bytes read, incase of success.

- exit() - free the dynamic memory before closing the program (in both success or failure case).

 */ 

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char *buffer;

void init(void);
int write(char *,int);
int read(char *,int);
void exit1(void);

int main()
{
int choice;		
char array[200];
int nw,nr;
char backup;

while(1)
{
	printf("\n1 write to buffer\n\n2 Read buffer\n\n3 exit\n\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("Write something\n");
			scanf("%s",array);
			printf("How many characters u want to write ?\n");
			scanf("%d",&nw);
			printf("%d characters written",write(array,nw));
			break;

		case 2: printf("how many char u want to read\n");
			scanf("%d",&nr);				
			read(buffer,nr);
			break;

		case 3: printf("Exiting system............................................................ \n");
			exit1();
			exit(1);
			break;		}
}
}

void init(void)          // allocated DMA of desired size ( 65535) and store this add in global variable buffer
{
	char *temp_buff = (char *)malloc( (pow(2,16)-1)* sizeof(char));
	buffer=temp_buff;
}

int write(char *wr , int n)   // write n characters of string into buffer   and return number of bytes/char written in case succes
{	
	init(); 
	int success=0;

	if(buffer != NULL)
	{
		strncpy(buffer,wr,n);
		success=1;		
	}

	else

	{
		printf("No memory associated with buffer\n");
	}

	if(success)
	return strlen(buffer);	
}

int read(char *rd , int n)
{	
	char backup;
	rd=buffer;int K=0;
	if(rd)
	{               
			int k=strlen(rd) -n;			
		//	printf("K %d \n",n ,k);
			
			if(k<0)    
			{
				printf("Desired read length more than buffer length\n");
				printf("%s\n",rd);
			}
		
			else if(k >=  0)
			{
			//	printf("In loop else if: final test 3 : strlen buffer - %d= %d \n",n ,strlen(rd)-n);
				backup=*(buffer+n);
				*(buffer+n)='\0';				
				printf("%s\n",rd);
				*(buffer+n)=backup;
			}					
	
        }
	else
	{
		printf("Sorry no memory is allocated for buffer \n");
	}
}
void exit1(void)
{
	
free(buffer);

}







