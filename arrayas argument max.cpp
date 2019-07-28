#include<iostream>
using namespace std;
int maxer(int a[],int n)
{	int j,max;
	max=a[0];
	for(j=0;j<n;j++)
	{
		if(max<a[j])
		{
			max=a[j];
		}
	}
	return max;
}
int main()
{
	int a[50],n,i,final;
	cout<<"Enter no. of elements";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	final=maxer(a,n);
	cout<<final;
	
	
}
