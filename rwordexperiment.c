#include <stdio.h>
#include <string.h>
 
void reverse_string(char*);
void reverse_words(char*);
 
int main() {
  char a[100];
printf("Enter a string \n"); 
  gets(a);
  reverse_string(a); 
  reverse_words(a);
 
  printf("%s\n", a);
 
  return 0;
}
 
void reverse_words(char *inputstring) {
  char array[200], *temp1, *temp2;     // two temporary pointers variables
  int c = 0;               // count variables to copy variable into array;
 
  temp1 = inputstring;                  // assigned address of orignal string to temp variable;
 
 	 while(*temp1)             // loop to travel till end of string
	{                           
		  while(*temp1 != ' ' && *temp1 != '\0') // my name is avinash
		{    
     			 array[c] = *temp1;
     			 temp1++;
     			 c++;
    		}

  	 array[c] = '\0';
  	 c = 0;
 	 reverse_string(array);        
 	 temp2 = array;                          // ist word succes reverse

  		while (*temp2) 
		{  
	
    			  *inputstring = *temp2;        // orignal string replaced by temp string but in reverse
    			  temp2++;
    			  inputstring++;
    		}
 
	    	while (*inputstring == ' ') 
		{                 
		     	 inputstring++;
	    	}

        temp1 = inputstring;                              // pointing to next word
  	}
}
 
/*
 * Function to reverse a string.
 */
void reverse_string(char *t) {
  int l, c;
  char *e, s;
 
  l = strlen(t);
  e = t + l - 1;
 
  for (c = 0; c < l/2; c++) {
    s  = *t;
    *t = *e;
    *e = s;
    t++;
    e--;
  }
}
