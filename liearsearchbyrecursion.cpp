#include<iostream>
using namespace std;
int searcher(int a[],int first,int last,int x)
{
	if (last < first) 
        return -1; 
    if (a[first] == x) 
        return first; 
    if (a[last] == x) 
        return last; 
    return searcher(a, first+1,  
                          last - 1, x);
	
}

int main()
{
	int voila,search,a[50],n,i;
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter array elements: ";
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to search";
	cin>>search;
	voila=searcher(a,0,n-1,search);
	if(voila!=-1)
	{
		cout<<"element found";	
		cout<<voila;
		
	}
	else{
		cout<<"element not found";
	}
}

