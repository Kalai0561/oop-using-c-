#include<iostream>
using namespace std;
int main(){
	int ascii;
	char upper,lower;
	cout<<"enter the character : ";
	cin>>upper;
	if(upper>='A' && upper<='Z'){
		ascii = upper;
		ascii = ascii+32;
		lower = ascii;
		cout<<"the lower character is : "<<lower;
	}
	else if(upper>='a' && upper<='z'){
		cout<<"please enter the char in capital letter :";
		
	}
	else{
		cout<<"invalid input";
	}
	return 0;
	
}
