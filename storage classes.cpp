#include<iostream>
using namespace std;

//global variable
int global=5;
void func()
{	
	auto int i=0;
	register int j=0;
	static int k=0;
	i++;
	j++;
	k++;
	cout<<"auto:"<<i<<"\nregister"<<j<<"\n static:"<<k<<endl;
	cout<<"GLOBAL:"<<global;
	//The extern keyword tells the compiler that a variable is declared in another source module (outside of the current scope).
}

int main()
{
	func();
	func();
	cout<<"GLOBAL:"<<global;
	
}

