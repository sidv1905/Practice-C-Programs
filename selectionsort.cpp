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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{	if(a[i]>a[j]){
		
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
		}
	}
		cout<<"Array after selection sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
}
