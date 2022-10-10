#include<iostream>
using namespace std;
int main()
{
	int n,i,min,max,sum,dif,arr[10];
	cout<<"how many numbers you want to give : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter the number : ";
			cin>>arr[i];
	}
	min=arr[0];
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	sum=min+max;
	dif=max-min;
	cout<<" \n the maximum element in the array is : "<<max;
	cout<<"\n the minimum element in the array is : "<<min;
	cout<<"\n the sum of the max and min is : "<<sum;
	cout<<"\n the difference in the max and min  is : "<<dif;

return 0;
}
