#include<iostream>
using namespace std;

int main()
{
	int a[10],max,i,n,largest,second;
	cout<<"ENTER ELEMENT NO>";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS;";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	if(a[0]>a[1])
	{
		largest=a[0];
		second=a[1];
	}
	else 
	{
		largest=a[1];
		second=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]>largest)
		{	second=largest;
			largest=a[i];
		}
		else if(a[i]>second && a[i]!=largest)
		{
			second=a[i];
		}
	}
	cout<<"SECOND LARGEST IS :"<<second;
}
