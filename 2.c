/*Write a function that takes two integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers.
Assume that the input arrays are sorted.

eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20 
output array3 : 9,10,12,13,14,15,16,19,20
*/

#include<stdio.h>
#include<stdlib.h>
int * sorting(int * a1,int sa1, int *a2,int sa2);
int main()
{
	int size1,size2,i;
	int array2[]={10,12,13,14,15,16};  // we can take dynamic array by user input also
	int array1[]={9,12,15,19,20};
	size1=sizeof(array1)/sizeof(int);size2=sizeof(array2)/sizeof(int);
	int *ptr = sorting(array1,size1,array2,size2);
	if(ptr)
	{
		for(i=0;i<12; i++)
		printf("%d ",*(ptr+i));
	
		printf("\n");
	}
	else
	{
		printf("memory not allocated\n");
		exit(1);
	}
	
}

int * sorting(int * a1,int sa1, int *a2,int sa2)
{
	int totalsize = sa1+sa2,a1_count=0,a2_count=0,buffer_count=0;

	int *bufferptr= (int*) malloc(totalsize*sizeof(int));
  
	while(a1_count<sa1 && a2_count<sa2)
  	{
		    if(*(a1+a1_count)==*(a2+a2_count))
   		{
     			 bufferptr[buffer_count++]=*(a1+a1_count);
		     	 a1_count++; 
			 a2_count++;
   	       	}
     	
	  	  else if(*(a1+a1_count)<*(a2+a2_count))
  	  	{
   		  	 bufferptr[buffer_count++]=*(a1+a1_count);
         	  	 a1_count++;
   	        }        	
		 else
    		{
	
		    	  bufferptr[buffer_count++]=*(a2+a2_count);
	    	     	   a2_count++;
   	 	}
  	}

  	 if(a1_count==sa1)
  	{
		    while(a2_count<sa2)
   	  	  {
 		      bufferptr[buffer_count++]=*(a2+a2_count);
		      a2_count++;
    	    	  }
  	}

  	else
  	{
 
		   while(a1_count<sa1)
    	   	{       
	     		 bufferptr[buffer_count++]=*(a1+a1_count);
	      		 a1_count++;
    	   	}	
  	}	  	
//-------------------------

	return bufferptr;
	
}
 




