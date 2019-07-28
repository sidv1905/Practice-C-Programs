//hexadecimal to decimal

#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	char hex[17];
	int i=0,val,lener;
	
	cout<<"ENTER HEXADECIMAL VALUE : ";
	gets(hex);
	int decimal=0;
	lener=strlen(hex)-1;
	while(hex[i]!='\0')
	{
		if(hex[i]>='0' && hex[i]<='9')
		{
			val=hex[i]-48;
		}
		 else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }
        decimal+=val*pow(16,lener);
        lener--;
        i++;
	 }
	 cout<<"DECIMAL IS : "<<decimal; 
}
