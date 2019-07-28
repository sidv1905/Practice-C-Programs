#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[50],sub[50];
	int n,str1,sub1,i;
	cout<<"Enter Main String";
	gets(str);
	cout<<"Enter Sub String";
	gets(sub);
	cout<<"enter Position where to insert";
	cin>>n;
	str1=strlen(str);
	sub1=strlen(sub);
	if(n>str1)
	{
		cout<<"Invalid position";
	}
	for(i=str1;i>=n;i--)
	{
		str[i+n]=str[i];
	}
	
	for(i=0;i<sub1;i++)
	{
		str[i+n]=sub[i];
	}
	cout<<"Output is : "<<str;
	
	
	
	
}
