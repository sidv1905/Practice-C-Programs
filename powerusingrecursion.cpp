#include<iostream>
using namespace std;
int power(int,int);
int main()
{
	int a,b,result;
	cout<<"enter numbers";
	cin>>a;
	cin>>b;
	cout<<power(a,b);
	
}

int power(int a,int b)
{	if(b!=0){
	return a*power(a,b-1);
}
else
{
	return 1;
}
}
