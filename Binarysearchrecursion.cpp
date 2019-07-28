#include<iostream>
using namespace std;
int binarys(int a[],int beg,int end,int num)
{	int mid;
	mid=beg+end/2;
	if(beg>end) 
	{cout<<"number not found";
	exit(0);
	}
	if(a[mid]==num)
	{
		return mid;
	}
	if(num>a[mid])
	{
		binarys(a,mid+1,end,num);
	}
	if(num<a[mid])
	{
		binarys(a,beg,mid-1,num);
	}
}
int main()
{
	int search,a[50],n,i,voila;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter array elements in sorted order: ";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to search";
	cin>>search;
	voila=binarys(a,0,n-1,search);
	cout<<"INDEX POSITION FOUND AT"<<voila;
}

