#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char s[30];
	
	cout<<"enter the string in lower case : ";
	cin>>s;
	
	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
	}
	cout<<"the upper string is : "<<s;
	return 0;
}
