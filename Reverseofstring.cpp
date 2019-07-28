#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[50],temp;
cout<<"Enter a String";
gets(str);
	int j=strlen(str)-1;
	int i=0;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
		
	}	
	cout<<str;
	
	
}
