#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned long)time(NULL));
	int m,n;
	m=rand()%5+3;
	n=rand()%5+3;
	printf("%d %d\n",m,n);
	int a[m][n];
	int b[m][n];
	int i,j;
	printf("原矩阵为\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=rand()%9+1;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int k;
	i=0;j=0;
	int t=0;
	for(k=0;k<n/2+1&&k<m/2+1;k++)
	{
		for( ;j<n-k-1&&t<m*n-1;j++)
		{
			b[i][j+1]=a[i][j];
			t++;
		}
		for( ;i<m-k-1&&t<m*n-1;i++)
		{
			b[i+1][j]=a[i][j];
			t++;
		}
		for( ;j>k&&t<m*n-1;j--)
		{
			b[i][j-1]=a[i][j];
			t++;
		}
		for( ;i>k+1&&t<m*n-1;i--)
		{
			b[i-1][j]=a[i][j];
			t++;
		}
	}
	b[0][0]=a[i][j];
	printf("移动后矩阵为\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
}
