//APPEND DATA TO A FILE
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outputer;
	outputer.open("old.txt",ios::app);
	outputer<<"YES I HAVE ADDED DATA BC";
	cout<<"DATA ADDED";
}
