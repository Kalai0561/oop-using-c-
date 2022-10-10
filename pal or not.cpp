#include<iostream>
using namespace std;
int main()
{
	int n,reverse=0,rem;
	cout<<"enter the number : ";
	cin>>n;
	
	while(n>0){
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	if(n==reverse){
		cout<<"it is a palindrome ";
	}
	else{
		cout<<"it is not a  palindrome ";
	}
	cout<<"\n the reverse number is :" <<reverse<<endl;
	return 0;
}	

