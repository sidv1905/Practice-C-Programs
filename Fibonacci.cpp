#include<iostream>
using namespace std;
int main()
{
	int first=0,second=1,next,n,i;
	cout<<"enter Sequence n number";
	cin>>n;
	cout<<first<<"   "<<second<<" ";
	for(i=0;i<n;i++)
	{
		next=first+second;
		cout<<next<<" ";
		first=second;
		second=next;
	}
	
	
}
