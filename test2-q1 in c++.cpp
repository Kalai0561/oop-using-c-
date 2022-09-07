#include<iostream>
using namespace std;
int main()
{
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	cout<<"enter the numbers of rows : ";
	cin>>r;
	cout<<"enter the number of column : ";
	cin>>c;
	
	cout<<"enter the first matrix "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter the value of a"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
	cout<<"enter the second matrix "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter the value of b"<<i+1<<j+1<<" : ";
 			cin>>b[i][j];
       }  
    }
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
 			sum[i][j] = a[i][j] + b[i][j];
       }  
    }
    cout<<"the substition of the matrix is : "<<endl;
    for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<sum[i][j]<<" ";
 			if(j== c-1){
 				cout<<endl;
			 }
       }  
    }
	
}
