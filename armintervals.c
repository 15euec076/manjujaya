#include <stdio.h>
int main()
{
 int a=350,b=450,i,temp1,temp2,rem,s=0,n=0;
 for(i=a+1;i<=b;++i)
 {
  temp1=i;
  temp2=i;
  while(temp1!=0)
  {
  temp1/=10;
  ++n;
  }
  while (temp2!=0)
  {
  rem=temp2%10;
  s+= pow(rem,n);
  temp2/=10;
  }
  if(s==i)
  {
  printf("%d\n",i);
  }
  n=0;
  s=0;
 }


 
  return 0;
}
