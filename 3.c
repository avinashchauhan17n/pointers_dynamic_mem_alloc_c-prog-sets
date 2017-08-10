/*  3) Implement your own realloc function using malloc and free  */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void *realloc_using_malloc(void *ptr, size_t len_old, size_t len_new);
int main()
{
char *ptr=(char *)malloc( sizeof(char) *10);

ptr[0]='a';
ptr[1]='v';
ptr[2]='i';
ptr[3]='n';
ptr[4]='a';
ptr[5]='s';
ptr[6]='h';

printf("\nold size: %s\n",ptr);

realloc_using_malloc(ptr, 10*sizeof(char),4);
ptr[4]='\0';

printf("\nNew size: %s\n",ptr);

}



void *realloc_using_malloc(void *ptr, size_t len_old, size_t len_new)
{
     if (len_new == 0)
   {
      free(ptr);
      return NULL;
   }
   else if (!ptr)
   {
      return malloc(len_new);
   }
   else if (len_new <= len_old)
   {
      return ptr;
   }
   else
   {
      assert((ptr) && (len_new > len_old));    
      void *ptrNew = malloc(len_new);
      if (ptrNew)
      {
          memcpy(ptrNew, ptr, len_old);  // copy from one line location to another 
          free(ptr);
      }
      return ptrNew;
    }
}

