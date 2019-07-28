#include<iostream>
using namespace std;

int main()
{
	int a[10],max,i,n;
	cout<<"ENTER ELEMENT NO>";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS;";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max;
}

