#include<stdio.h>
int main()
{
	int n,i;
	float sum=0.0;
	printf("enter the value of n : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+(1/(float)i);
		i++;
		
	}
	printf("sum is %.2f",sum);
	return 0;
}
