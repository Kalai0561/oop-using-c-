#include<stdio.h>
main()
{
	int n,i,arr[50],max,min,sum,dif;
	printf("enter the number : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element %d : ",i);
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max= arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("the max : %d\n",max);
	printf("the min : %d\n",min);	
	sum=max+min;
	printf("the sum of the two number is %d \n:",sum);
	dif=max-min;
	printf("the differece between two numbers is %d :",dif);
	
	return 0;
}
