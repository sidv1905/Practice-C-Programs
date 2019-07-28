#include<iostream>
using namespace std;
//to copy a string into another by pointer
void copier(char*,char*);
int main()
{
	char tar[50],sour[50];
	cout<<"ENTER STRING :";
	gets(sour);
	copier(tar,sour);
	cout<<tar;
}

void copier(char *target,char *source)
{
	while(*source!='\0')
	{
		*target=*source;
		target++;
		source++;
	}

}

