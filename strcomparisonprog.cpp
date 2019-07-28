#include<iostream>
using namespace std;

int main()
{
	char a[50],b[50];
	cout<<"ENTER STRING :";
	gets(a);
	cout<<"ENTER 2nd string: ";
	gets(b);
	int i=0;
	while(a[i]==b[i])
	{
		if(a[i]=='\0' || b[i]=='\0')
		{
			break;
		}
		i++;	
	}	
	if(a[i]=='\0' && b[i]=='\0')
	{
		cout<<"IDENTICAL";
	}
	else
	{
		cout<<"NOT IDENTICAL";
	}
}
