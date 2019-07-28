#include<iostream>
using namespace std;
int main()
{
	int marks;
	char name[100];
	cout<<"Enter your name";
	gets(name);
	cout<<"Enter Marks";
	cin>>marks;
	
	if(marks>=60)
	{
		cout<<"FIRST";
	}
	else if(marks>=50 && marks<60)
	{
		cout<<"SECOND";
	}
	else if(marks>=40 && marks<50)
	{
		cout<<"THIRD";
	}
	else if(marks<40)
	{
		cout<<"FAILED";
	}
}
