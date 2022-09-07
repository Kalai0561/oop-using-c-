#include<iostream>
using namespace std;

class kalai
{
	public:
		void college(){
			cout<<"SIMATS"<<endl;
		}
};

class kani:public kalai
{
	public:
		void work(){
			cout<<"house wife"<<endl;
		}
};

class raj:public kani
{
	public:
		void city(){
			cout<<"Tamil nadu"<<endl;
		}
};

int main()
{
	raj obj;
	obj.city();
	obj.work();
	obj.college();
	
	return 0;
}
