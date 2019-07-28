#include<iostream>
using namespace std;
void swapp(int,int);
int main()
{
	int a,b;
	cout<<"Enter two values";
	cin>>a;
	cin>>b;
	swapp(a,b);
	cout<<a<<" "<<" "<<b;
}
void swapp(int a,int b)
{	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b;
 	
}

