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
class dharshu:public kani,public raj
{
	public:
		void intrest(){
			cout<<"drawing"<<endl;
		}
};

//main 

int main()
{
	dharshu obj;
	obj.city();
	obj.intrest();
	obj.work();
	
	return 0;
}
