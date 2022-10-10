#include<stdio.h>
int main()
{
	int a,b,choice,val=1,i;
	printf("1.addition\n 2.power\n 3.multiplication\n 4.division\n");
	scanf("%d",&choice);
	
	if(choice > 4)
	{
		printf("please select the value within 4");	
	}
	else
	    printf("enter 2 intergers value : ");
	    scanf("%d %d",&a ,&b);
	
	switch(choice)
	{
		case 1: printf("%d + %d = %d\n", a , b, (a+b));
	           	break;
		
		case 2: for(i=0;i<b;i++)
		{
			val=val*a;
		}
		printf("%d ** %d = %d\n", a , b ,val);
	    break;
		case 3: printf("%d * %d = %d\n", a , b ,(a*b));
		        break;
	
		case 4 :if(b != 0)
		{
			printf("%d / %d = %d\n", a , b ,(a/b));
		}
		else
			printf("the given vale is not divided by zero");
		    break;
	return 0;	
	}
	
}
