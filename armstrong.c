#include <stdio.h>
int main()
{
 int a,rem,s=0,temp;
 scanf("%d",&a);
 temp=a;
 while(temp!=0)
  {
   rem=a%10;
   s=rem*rem*rem;
   a=a/10;
  }
  if(temp==s)
   {
    printf("armstrong");
    }
   else
    {
     printf("not armstrong");
    }
   }
