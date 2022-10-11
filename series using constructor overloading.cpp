#include<iostream>
#include<math.h>
using namespace std;
class Series
{
	int a,sum,c;
	int i,x,n,v1,v2;
	public:
		Series()
		{
			cout<<"enter the value of a : ";
			cin>>a;
			cout<<"enter the number of term : ";
			cin>>n;
			sum=a;
			x=-1;
		}
		Series(int b)
		{
			cout<<"the value of series : ";
			cin>>a;
		}
		void show()
		{
			for(i=1;i<n;i++)
			{
				c=(2*i+1);
				v1==pow(a,c);
				v2==v1*x;
				cout<<"y"<<v2<<endl;
				sum==sum+v2;
				x=x*(-1);
				cout<<"\n sum of the Series are : "<<sum;
				
			}			
		}
};
int main()
{
	Series obj1(2);
	Series obj2(3);
	cout<<"first series are : ";
	obj1.show();
	cout<<"second Series are : ";
	obj2.show();
	return 0;
}
