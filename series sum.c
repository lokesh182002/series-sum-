#include<stdio.h>
void main()
{
	int N,i;
	float sum=0.0;
	printf("\n enter no of elements:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum=sum+(i/(float)(i+1));
	}
	printf("\n sum=%f",sum);
}
