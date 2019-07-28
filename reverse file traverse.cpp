//to print the data of file into reverse order
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	FILE *fp;
	char ch;
	int i=0,n;
	fp=fopen("old.txt","r");
	fseek(fp,0,SEEK_END);
	n=ftell(fp);
	while(i<n)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		ch=fgetc(fp);
		cout<<ch;
		
	}
}
