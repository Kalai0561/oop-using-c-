#include<iostream>;
using namespace std;
int main()
{
	int n,i,m=0,flag=0;
	cout<<"enter the number to check the prime or not : ";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++){
		if(n%i==0){
			cout<<"it is not a prime number";
			flag=1;
			break;
			
		}
	}
	if(flag==0){
		cout<<"it is a prime number ";
	}
	return 0;
}
