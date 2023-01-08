#include <stdio.h>
#include <math.h>
int main()
{
	int num,temp;
	scanf("%x",&num);
	int num1=num%(16*16)*pow(16,5)+num/(16*16);
	int num2=0;
	int i=1;
	while(num1>0)
	{
		temp=(num1%16+16-5)%16;
		num2=num2+temp*i;
		i=i*16;
		num1=num1/16;
	}
	printf("%dÄê%dÔÂ%dÈÕ",num2/10000,num2/100%100,num2%100);
}
