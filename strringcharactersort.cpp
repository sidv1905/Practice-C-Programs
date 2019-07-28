#include<iostream>
#include <bits/stdc++.h> 
#include<string.h>
using namespace std;

int main()

{
	char str1[50];
	cout<<"ENTER A STRING";
	gets(str1);
//	sort(str1,str1+strlen(str1));
//	cout<<str1;
	//BY SELECTION SORT
	int n=strlen(str1);
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(str1[j]<str1[i])
			{
				
			temp=str1[j];
			str1[j]=str1[i];
			str1[i]=temp;
				
					
			}	
		}	
	}
	cout<<"SORTED STRING IS: "<< str1;	
	
	
}
