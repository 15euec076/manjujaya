#include <stdio.h>
int main()
{
	int a,sum=0;
	scanf("%d",&a);
	 a=0;
	while(a<6)
	{
		sum=sum+a;
		a++;
	}
	printf("%d",sum);

	return 0;
}
