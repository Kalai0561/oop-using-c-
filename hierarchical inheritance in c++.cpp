#include<iostream>
using namespace std;

//base1
class kalai
{
	public:
		void college(){
			cout<<"SIMATS"<<endl;
		}
};

//derived1
class kani:public kalai
{
	public:
		void work(){
			cout<<"house wife"<<endl;
		}
};

//derived2
class raj:public kalai
{
	public:
		void city(){
			cout<<"Tamil nadu"<<endl;
		}
};

//derived3
class dharshu:public kalai
{
	public:
		void intrest(){
			cout<<"drawing"<<endl;
		}
};


int main()
{
	raj obj1;
	kani obj2;
	dharshu obj3;
	obj1.city();
	obj2.work();
	obj1.college();
	obj2.college();
	obj3.college();
	obj3.intrest();
	return 0;
}
