//unions
#include<iostream>
using namespace std;
union student{
	int id;
	float marks;
}s1,s2;
int main()
{
	s1.id=222;
	s1.marks=56.1;
	
	cout<<"ID IS LOST : "<<s1.id<<endl;
	cout<<"FLOAT IS : "<<s1.marks<<endl;
	
	s2.marks=24.5;
	s2.id=222;
	cout<<"THIS TIME MARKS ARE LOST : SEE :"<<s2.marks;
	cout<<"id PERSISTS"<<s2.id<<endl;
	
}
