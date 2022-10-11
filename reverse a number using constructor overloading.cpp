#include<iostream>
using namespace std;
class reverse
{
	private:
		int i;
		public:
	reverse (int n)
	{
		
		cout<<endl<<" Enter the number : ";
		for(i=n;n>0;n=n/10)
		{
			cout<<n%10;
		}
	}
	reverse (long int a)
	{
		cout<<endl<<" Enter the  number : ";
		for(i=a;a>0;a=a/10)
		{
			cout<<a%10;
		}
	}
};
int main()
{
	 long int a ;
	 cout<<"Enter  Number to reverse : ";
	 cin>>a;
	 reverse r(a);
	
}
