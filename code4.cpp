#include <stdio.h>
int MIN(int m,int n)
{
	if(m<n)
	return m;
	else return n;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int arr[n];
	int i,j;
	int min;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=m;i<n;i++)
	{
		min=0;
		for(j=0;j<m;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}	
		}
		arr[min]=arr[min]+arr[i];
	}
	int max=0;
	for(i=0;i<MIN(m,n);i++)
	{
		if(arr[max]<arr[i])
		    max=i;
	}
	printf("%d",arr[max]);
}
