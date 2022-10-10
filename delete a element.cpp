#include<iostream>
using namespace std;
int main()
{
	int a[10],n,del,i;
	cout<<"enter the numbers of elements : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the elements : ";
		cin>>a[i];
	}
	cout<<"enter the position you want to delete : ";
	cin>>del;
	for(i=del;i<n;i++){
		a[i-1]=a[i];
	}
	for(i=0;i<n-1;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
