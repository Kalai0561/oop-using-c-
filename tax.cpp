#include<iostream>
using namespace std;
int main(){
	int n,c,tax;
	cout<<"enter the income amount : ";
	cin>>n;
	if(n<=60000){
		cout<<"tax for your income is : 0 ";
	}
	else if(n>60000 && n<=150000){
		tax=n*0.05;
	}
	else if(n>150000 && n<=500000){
		tax=n*0.1;
	}
	else{
		tax=n*0.15;
	}
	cout<<"the tax amount is : "<<tax;
	return 0;
}
