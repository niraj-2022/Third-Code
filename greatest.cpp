#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("the greatest number is %d",a);
	}
	else if(b>c && b>a)
	{
	printf("the greatest number is %d",b);
	}
	else
	{
	printf("the greatest number is %d",c); 
	}
}
