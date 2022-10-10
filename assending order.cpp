#include<iostream>
using namespace std;
int main()
{
	int n,i,j,a[10],temp;
	cout<<"enter the no of elements:  ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the number : ";
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<"the accesinding order is : "<<a[i]<<endl
		;
	}
	return 0;
}
