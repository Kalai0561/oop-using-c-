#include<iostream>
using namespace std;
int main()
{
	int arr[10],max,min,n,i,j;
	cout<<"enter the number of array you want :  ";
	cin>>n;
	cout<<"enter the values of the array's : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	min=arr[0];
	for(i=0;i<n;i++){
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"the maximum element in the array is :"<<max<<endl;
	cout<<"the minimum element in the array is : "<<min<<endl;
	return 0;
}

