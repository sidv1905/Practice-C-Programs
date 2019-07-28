//pinter to a structure variable with ex:
#include<iostream>
using namespace std;

struct
{
	int id;
	float marks;
}s1,*sp;

int main()
{	
	s1.id=222;
	s1.marks=100;
	sp=&s1;

	
	cout<<s1.id<<" "<<s1.marks;
	cout<<sp->id<<" "<<sp->marks;
	
}
