#include <stdio.h>
int main()
{
 int a,rem,s=0,temp;
 scanf("%d",&a);
 temp=a;
 while(a!=0)
  {
   rem=a%10;
   s+=rem*rem*rem;
   a=a/10;
  }
  if(s==temp)
   {
    printf("armstrong");
    }
   else
    {
     printf("not armstrong");
    }
   }
