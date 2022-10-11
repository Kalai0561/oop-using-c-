#include<iostream>
using namespace std;
int main(){
	int ascii;
	char upper,lower;
	cout<<"enter the character : ";
	cin>>lower;
	if(lower>='a' && lower<='z'){
		ascii = lower;
		ascii = ascii-32;
		upper = ascii;
		cout<<"the upper character is : "<<upper;
	}
	else if(lower>='A' && lower<='Z'){
		cout<<"please enter the char in capital letter :";
		
	}
	else{
		cout<<"invalid input";
	}
	return 0;
	
}
