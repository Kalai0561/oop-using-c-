#include<iostream>
using namespace std;
class triangle
{
	protected :
		int i,j,n,r;
	public :
		triangle (int one)
		{
			for(i=1 ; i<=one ; i++)
			{
				for(j=1 ; j<=i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
		}
		triangle (int one,int two)
		{
			for(i=1 ; i<=one ; i++)
			{
				for(j=1 ; j<=i ; j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			cout<<"\n\n\n2nd Pattern is given below\n\n";
			{
				for(i=1 ; i<=two ; i++)
				{
					for(j=1 ; j<=i ; j++)
					{
						cout<<i;
					}
					cout<<endl;
				}
			}
		}
};
int main()
{
	int option; 
	cout<<"Enter 1 for Single parameter  \n";
	cout<<"\nEnter 2 For Multiple Paramter \n";
	cout<<"\nEnter 1 or 2 : ";
	cin>>option;
	if(option ==1)
	{
		int one;
		cout<<"Enter number of rows : ";
		cin>>one;
		triangle a(one);
	}
	else if(option==2)
	{
		int two,three;
		cout<<"Enter First number of rows : ";
		cin>>two;
		cout<<"\nEnter Second number of rows: ";
		cin>>three;
		triangle a(two, three);
	}
	else
	{
		cout<<"invalid input \n";
	}
}
