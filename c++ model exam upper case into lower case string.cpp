#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	char s[30];
	
	cout<<"enter the string in upper case : ";
	cin>>s;
	
	for(i=0;i<=strlen(s);i++)
	{
		if(s[i]>=65 && s[i]<=90)
		{
			s[i]=s[i]+32;
		}
	}
	cout<<"the lower string is : "<<s;
	return 0;
}
