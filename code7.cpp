#include <stdio.h>
#include <string.h>
int transchar (char *a)
{
	int i;
	int t=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[t]=a[i]+32;
			t++;
		}
		if(a[i]>=97&&a[i]<=122)
		{
			a[t]=a[i]-32;
			t++;
		}
	}
	return t--;
}//大小写反转 
void newchar(char* s1,char* s2,char *p1,char *p2,char *ne)
{
	int t=0;
	if(strcmp(s1,s2)<0&&p1<p2)
	{
		while(p1!=p2)
		{
			ne[t]=*p1;
			p1++;
			t++;
		}
		ne[t]=*p1;
	}
	if(strcmp(s1,s2)>0&&p1>p2)
	{
		while(p2!=p1)
		{
			ne[t]=*p2;
			p2++;
			t++;
		}
		ne[t]=*p2;
	}
	if(strcmp(s1,s2)<0&&p1>p2)
	{
		while(p2!=p1)
		{
			ne[t]=*p1;
			p1--;
			t++;
		}
		ne[t]=*p1;
	}
	else{
		while(p2!=p1)
		{
			ne[t]=*p2;
			p2--;
			t++;
		}
		ne[t]=*p2;
	}	
}//新字符串 
void tran(char n)
{
	for(int i=3;i>0;i--)
	{
		printf("%d",n%10);
		n=n/10;
	}
}//数字反转 
int main()
{
	char S[101],s1[101],s2[101];
	gets(s1);
	gets(s2);
	gets(S);
	char *p1=strstr(S,s1);
	char *p2=strstr(S,s2);
	if(p1==NULL&&p2==NULL)
		printf("ERROR");
	if(p1>p2)
	{
		p1=p1-1;
		p2=p2+strlen(s2);
	}
	else{
		p1=p1+strlen(s1);
		p2=p2-1;
	}
	char ne[101];
	newchar(s1,s2,p1,p2,ne);
	int t=transchar(ne);
	if(t==0)
		printf("NONE");
	else{
		for(int i=t-1;i>0;i--)
		{
			tran(ne[i]);
		}
		while(ne[0]>0)
		{
			printf("%d",ne[0]%10);
			ne[0]/=10;
		}
	}
}
