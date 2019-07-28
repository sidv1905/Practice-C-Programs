#include<iostream>
using namespace std;
int main()
{
	int a[50],i,j,n,key;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter array elements: ";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i;
		while(j>0 && a[j-1]>key)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=key;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
