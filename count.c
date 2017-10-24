#include <stdio.h>
int main()
{
	int long a;
	int count=0;
	scanf("%ld",&a);
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("%d",count);
 
	return 0;
}
