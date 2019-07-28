//to reverse first n characters in a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	FILE *fp;
	char ch;
	int i=0,pos;
	
	cout<<"ENTER POS UPTO WHCIH YOU WANT IT REVERSED";
	cin>>pos;
	fp=fopen("old.txt","r");
	fseek(fp,0,SEEK_END);
	while(i<pos)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		ch=fgetc(fp);
		cout<<ch;
		
	}
}
