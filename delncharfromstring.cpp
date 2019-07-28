#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[50];
	int n,pos;
	cout<<"ENTER STRING";
	gets(s);
	cout<<"ENTER POSITION FROM WHER TO BE DELETED";
	cin>>pos;
	cout<<"ENTER NO OF CHARACTERS TO BE DELETED";
	cin>>n;
	if(n+pos-1<=strlen(s))
	{
		strcpy(&s[pos-1],&s[n+pos-1]);
	}
	
	cout<<"string is :"<<s;
	
}
