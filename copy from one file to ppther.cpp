#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	fstream tar,sour;
	char b;
	sour.open("old.txt");
	tar.open("new.txt");
	
	

	while(!sour.eof())
	{
		sour.get(b);
		cout<<b;
		tar<<b;
	}
	sour.close();
	tar.close();
	
}
