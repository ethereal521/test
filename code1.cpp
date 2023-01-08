#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=",n);
	if(n%2!=0)
	{
		printf("3+");
		n=n-3;	
	}
	while(n>2)
	{
		printf("2+");
		n=n-2;
	}
	printf("2");
}
