#include<iostream>
using namespace std;

int main()
{
	int a[10],j,k,i,n;
	cout<<"ENTER ELEMENT NO>";
	cin>>n;
	cout<<"ENTER ARRAY ELEMENTS;";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j])
		{
		
			  for(k=j; k<n; k++)
                {
                    a[k] = a[k + 1];
                }
 
       
                n--;
 
         
		}}
	}
	 cout<<"\nArray elements after deleting duplicates : ";
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<a[i];
    }
		
}
