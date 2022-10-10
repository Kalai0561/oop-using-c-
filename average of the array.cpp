#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[10],sum=0;
	float avg;
	cout<<"how many numbers you want to give : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"enter the number :";
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	avg=sum/n;
	cout<<"the average of the array is :"<<avg;
	return 0;
	
}
