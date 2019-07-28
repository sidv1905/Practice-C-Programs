#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[50],naya;
	int pos,temp;
	cout<<"Enter a string";
	gets(s);
	cout<<"Enter the position from where to delete : 0 FOR BEG, -1 FOR END";
	cin>>pos;
	cout<<"Enter haracter yyou want to add:";
	cin>>naya;
	if(pos==0)
	{
		temp=s[0];
		s[0]=naya;
		
		
	}
 	else if(pos==-1)
 	{
 		temp=s[strlen(s)-1];
 		s[strlen(s)-1]=naya;
	}
	else
	{	
		temp=s[pos-1];
 		s[pos-1]=naya;
		
	
	}
	cout<<"STIRNG IS: "<<s;
}	

