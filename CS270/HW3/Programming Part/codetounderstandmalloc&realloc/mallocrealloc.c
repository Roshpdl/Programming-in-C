
//Run this code in pythontutor for a great understanding of how pointers, malloc, and realloc work.

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int *ptr = (int *)malloc(sizeof(int)*2);
   int i;
     
   *ptr = 10; 
   *(ptr + 1) = 20;
     
   ptr = (int *)realloc(ptr, sizeof(int)*3);
   *(ptr + 2) = 30;
   for(i = 0; i < 3; i++)
       printf("%d ", *(ptr + i));
  
   getchar();
   return 0;
}
