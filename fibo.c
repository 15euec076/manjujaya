#include <stdio.h>
int main(void)
{
	int a,t1=0,t2=1,next,i;
	scanf("%d",&a);
	for(i=1;i<=a;++i)
	{printf("%d\n",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
		
	}


	return 0;
}
