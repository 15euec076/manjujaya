#include<stdio.h>
int main(void)
{
 int x,y,c,d,t,gcd,lcm;
 scanf("%d%d",&x,&y);
 c=x;
 d=y;
 while(d!=0)
 {
  t=d;
  d=c%d;
  c=t;
  }
 gcd=c;
 lcm=(x*y)/gcd;
 printf("%d",lcm);
 return 0;
 }
