#include<iostream>
using namespace std;
//TO FIND LENGTH OF A STRING
int find_length(char*);
int main()
{
	char a[50];
	int length;
	cout<<"ENTER STRING :";
	gets(a);
	length=find_length(a);
	cout<<"LENgth of"<<a<<"is"<<length;
}
int find_length(char *a)
{
	int count=0;
	while(*a!='\0')
	{
		count++;
		a++;
	}
	return count;
}
