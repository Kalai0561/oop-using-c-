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
				cout<<"enter the number:";
				cin>>n;
				for(i=1; i<=n; i++)
				{
							cout<<" cube of "<<i<<" is: "<<(i*i*i)<<endl;
					
				}
			}
		};
int main()
   {
   	int p,q;
	cuberoot object(p,q);
	cuberoot object2;
	object.display();
}
