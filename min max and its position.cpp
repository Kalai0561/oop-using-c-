#include<iostream>
using namespace std;
int main()
{
	int arr[25],i,n,min,max,index,index2;
	cout<<"enter the number of value you want : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<" enter the values : ";
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i])
		{
			max=arr[i];
			index = i;
		}
	}
	min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i])
		{
			min=arr[i];
			index2= i;
		}
	}
	
	cout<<"the maximum number is: "<<max<< " and the index is : "<<index<<endl;
	cout<<"the minimum number is: "<<min<< " and the index is : "<<index2;

	return 0;
}
