#include<stdio.h>
main()
{
	int n,i,j,s;
	printf("enter the n value : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		{
			printf("  ");
		}
		for(j=0;j<i*2+1;j++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
}
