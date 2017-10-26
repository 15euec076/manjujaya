#include<stdio.h>
int main(void)
{
 int x,y,a,b,t,gcd,lcm;
 scanf("%d%d",&x,&y);
 a=x;
 b=y;
 while(b!=0)
 {
  t=b;
  b=a%b;
  a=t;
  }
 gcd=a;
 lcm=(x*y)/gcd;
 printf("%d",lcm);
 return 0;
 }
