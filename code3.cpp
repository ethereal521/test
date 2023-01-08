#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[100];
	int i=0;
	while(n!=1)
	{
		if(n%2==0)
		{
			a[i]='^';
			i++;
			n=n/2;
		}
		else{
			if(n%4==3&&n!=3)
			{
				a[i]='+';
				i++;
				n=n+1;
			}
			if(n==3)
			{
				a[i]='-';
				i++;
				n=n-1;
			}
			if(n%4==1)
			{
				a[i]='-';
				i++;
				n=n-1;
			}
		}
	}
	printf("%d\n",i);
	int j;
	for(j=0;j<i;j++)
	    printf("%c",a[j]);
}
