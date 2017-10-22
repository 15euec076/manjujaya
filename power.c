#include <stdio.h>
int main()
{
 int base,expo;
 long result=1;
 scanf("%d",&base);
 scanf("%d",&expo);
 while(expo!=0)
  {
   result *=base;
   --expo;
  }
 printf("%ld",&result);
 
