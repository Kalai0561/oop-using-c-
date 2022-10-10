#include<iostream>
using namespace std;
int main(){
	int n,i,a[10],ele,pos;
	cout<<"enter the element size : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the numbers  : ";
		cin>>a[i];
	}
	cout<<"enter the insert element : ";
	cin>>ele;
	cout<<"enter the position : ";
	cin>>pos;
	if(pos>n){
		cout<<"invaid input ";
		exit(0);
	}
	else{
		for(i=n-1;i>=pos;i--){
			a[i+1]=a[i];
		}
	}
	a[pos]=ele;
	cout<<"the new list elements are : ";
	for(i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
