#include<stdio.h>
#include<stdlib.h>
int GetSum(int,int);
int main()
{
	int a,b,ans=0;
	printf("enter the no.:\n");
	scanf("%d%d",&a,&b);
	ans=GetSum(a,b);
	printf("%d",ans);
}
int GetSum(int a,int b)
{
	int result;
	result=a+b;
	return result;
}
