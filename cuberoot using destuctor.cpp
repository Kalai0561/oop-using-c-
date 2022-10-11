#include<iostream>
#include<conio.h>
using namespace std;
class cuberoot
{
	private:
		int i,n;
		public:
			cuberoot()
	        {
	        	i=1;
	        	n=0;
	        }
	        cuberoot(int p, int q)
	        {
	        	i=p;
	        	n=q;
			}
			void display()
			{
				cout<<"enter the number : ";
				cin>>n;
				for(i=1; i<=n; i++)
				{
					cout<<" The cube of "<<i<<" is = "<<(i*i*i)<<endl;
					
				}
			}
			~cuberoot()
			{
				cout<<" clear"<<endl;
			}
		};
int main()
   {
   	int p,q;
	cuberoot obj(p,q);
	obj.display();
}
