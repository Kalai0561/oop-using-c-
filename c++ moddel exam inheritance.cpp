#include<iostream>
using namespace std;
class kalai
{
	public:
		void fullname()
		{
			cout<<"kalaiyarasan";
		}
};
class kabil
{
	public:
		void job()
		{
			cout<<"TVS automobiles ";
		}
};
class kani:public kalai,public kabil ,public aruna,public rajan
{
	public:
		void occupation()
		{
			cout<<"house wife ";
		}
};
class rajan:public kani
{
	public:
		void work()
		{
			cout<<"grocery shop";
		}
};
class aruna:public kani
{
	public:
		void qualification()
		{
			cout<<"M.sc";
		}
};
int main()
{
	kani obj1;
	rajan obj2;
	aruna obj3;
	obj1.fullname();
	obj1.job();
	obj1.occupation();
	obj2.fullname();
	obj2.job();
	obj2.occupation();
	obj2.work();
	obj3.fullname();
	obj3.job();
	obj3.occupation();
	obj3.qualification();
	return 0;
}
