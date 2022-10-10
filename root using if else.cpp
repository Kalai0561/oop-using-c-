#include<iostream>;
using namespace std;
int main(double n,double m)
{
	float n,i,pow,m;
	cout<<"enter the number : ";
	cin>>n;
	cout<<"enter the root of the number : ";
	cin>>m;
	
	for(i=0.01;i*i<=n;i*i+0.01){
		if(n==0){
			cout<<"the square root of the given number is  0";
		}
		else if(n==1){
			cout<<"the square root of the given number is 1 ";
		}
		else if(n<0){
			cout<<"invalid input";
		}
		else{
		     pow=pow(n,m);
		}
	}
	cout<<"the root of the given number is : "<<pow;
	return 0;
}

