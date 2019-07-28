#include<iostream>
using namespace std;

int main()
{
	int a[10],max,i,n,smallest,second;
	cout<<"ENTER ELEMENT NO>";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS;";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(a[0]<a[1])
	{
		smallest=a[0];
		second=a[1];	
	}	
	else
	{
		smallest=a[1];
		second=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]<smallest)
		{	second=smallest;
			smallest=a[i];
		}
		else if(a[i]<second && a[i]!=smallest){
			second=a[i];
		}
	}
	cout<<"SECOND SMALLE IS : "<<second;
}
