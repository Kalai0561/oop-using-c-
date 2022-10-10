#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n,f,a,b,l,swap,digits;
	cout<<"enter the number : ";
	cin>>n;
	l=n%10;
	digits = (int)log10(n);
	f=n/pow(10,digits);
	a=f*(pow(10,digits));
	b=n%a;
	n=b/10;
	swap=l*(pow(10,digits))+(n*10+f);
	cout<<"the swapped number is : "<<swap;
	return 0;
}
