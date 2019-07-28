#include<iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T>0)
	{	char P[26],S[100];
	int a[100];
	
		cin>>P;
		cin>>S;
		
		for(i=0;i<strlen(S);i++)
		{
			const char *ptr = strchr(P, S[i]);
			if(ptr) 
			{
  	
	  		    int index = ptr - values;
				a[i]=index;	
            }
            
		}
		
		sort(arr, arr+arr.size()); 
		
		
		
		
		T--;
		
	}
}
