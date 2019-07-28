#include<iostream>
using namespace std;
int main()
{
	int a[50],i,j,n,temp;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter array elements: ";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{	
		for(j=0;j<n-i;j++)
		{if(a[j+1]<a[j])
			{
			
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}}
	}
	cout<<"Array after bubble sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
}
