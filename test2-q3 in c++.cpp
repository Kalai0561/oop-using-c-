#include<iostream>
using namespace std;

// base class 1
class kalai
{
	public:
		void collage(){
			cout<<"simats"<<endl;
		}
};
 
//base class 2
class rajath
{
	public:
		void city(){
			cout<<" bengal"<<endl;
		}
};

//derived class 1
class rajan:public kalai
{
	public:
		void occupation1(){
			cout<<"shop keeper "<<endl;
		}
};

//derived class 2
class kani:public kalai,public rajath
{
	public:
		void occupation2(){
			cout<<"house wife"<<endl;
		}
};

int main(){
	int occupation1,occupation2,collage,city;
	rajan obj1;
	kani obj2;
	obj1.occupation1();
	obj2.occupation2();
	obj2.city();
	obj2.collage();
	
	return 0;
}
