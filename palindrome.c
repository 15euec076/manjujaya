#include <stdio.h>
int main()
{
 int n,temp,rem,s=0;
 scanf("%d", &n);
 temp=n;
 while(n!=0)
  {
   rem=n%10;
   s=s*10+rem;
   n=n/10;
  }
 if(temp==s)
  {
   printf("palindrome");
  }
 else
  {
   printf("not palindrome");
  }
 }
