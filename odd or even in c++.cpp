#include<iostream>;
using namespace std;
int main()
{
	int a;
	cout<<"to chech odd or even number ?"<<endl;
	cout<<"Enter the positive integer number : ";
	cin>>a;
	
	if(a%2==0){
		cout<<"the given number : "<<a<<" is even number.";
	}
	else{
		cout<<"the given number : "<<a<<" is odd number.";
	}
	return 0;
}
