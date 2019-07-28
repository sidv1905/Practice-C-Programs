#include<iostream>
using namespace std;

int main()
{
FILE *fp;
char ch;
fp=fopen(__FILE__,"r");

while(ch!=EOF)
{	ch=fgetc(fp);
	cout<<ch;
}



	
}
