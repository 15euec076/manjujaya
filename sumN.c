#include <stdio.h>
int main()
{
	int N,a,sum=0;
	scanf("%d",&N);
	a=0;
	while(a<=N)
	{
	sum+=a;
	a++;
	}
	printf("%d",sum);


	return 0;
}
