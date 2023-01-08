#include <stdio.h>
int main()
{
	int need_a,need_b,need_c,need_d;
	int a,b,c,d;
	scanf("%d%d%d%d",&need_a,&need_b,&need_c,&need_d);
	int result[5];
	result[0]=400;
	for(a=0;a<=100;a++)
	{
		for(b=0;b<=100;b++)
		{
			for(c=0;c<=100;c++)
			{
				for(d=0;d<=100;d++)
				{
					if(a+b/3+c/3+d/2>=need_a&&
					   b+a/3+c/3+d/2>=need_b&&
					   c+a/3+b/3+d/2>=need_c&&
					   d+a/2+b/2+c/2>=need_d&&
					   a+b+c+d<result[0])
					{
						result[0]=a+b+c+d;
						result[1]=a;
						result[2]=b;
						result[3]=c;
						result[4]=d;
					}
				}
			}
		}
	}
	printf("%d\n%d %d %d %d",result[0],result[1],result[2],result[3],result[4]);
}
