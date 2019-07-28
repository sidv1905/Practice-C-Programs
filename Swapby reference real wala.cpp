#include<iostream>
using namespace std;
void swapp(int *,int *);
int main()
{
	int a,b;
	cout<<"enter two numbers;";
	cin>>a>>b;
	swapp(&a,&b);
	cout<<a<<b;
}
void swapp(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
