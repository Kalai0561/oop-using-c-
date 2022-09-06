#include<iostream>
using namespace std;
int main()
{
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	cout<<"enter the number of rows between 1 to 100 :";
	cin>>r;
	cout<<"enter the number of coloum between 1 to 100 : ";
	cin>>c;
	
	cout<<"enter the first matrix values : "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter the element a"<< i + 1 << j + 1 <<" : ";
			cin>>a[i][j];
		}
	}
	cout<<"enter the second matrix value : "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<<"enter the element b"<< i + 1 << j + 1 << " : ";
			cin>>b[i][j];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum[i][j]=a[i][j]+b[i][j];
			
		}
	}
	cout<<"the sum of the two matrix are : "<<endl;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			cout<< sum[i][j] <<"  ";
			if(j== c - 1){
				cout << endl;
				
			}
		}
	}
	return 0;
}
