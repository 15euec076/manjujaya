#include <stdio.h>
int main()
{
 int a=70,b=80,i,j,flag;
 for(i=a+1;i<=b;i++)
 {
  flag=0;
  for(j=2;j<=i/2;j++)
  {
   if(i%j==0)
   {
    flag=1;
    break;
   }
  }
  if(flag==0)
  {
   printf("%d\n",i);
   }
  }
 return 0;
 }
 
  
