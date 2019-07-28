#include<iostream>
using namespace std;
//quicksort
int partition(int [],int ,int);
void quick_sort(int [], int , int);

int main()
{
	int a[50],n,i;
	cout<<"ENTER NO OF ELEMENTS FOR SORTING :";
	cin>>n;
	cout<<"ENTER ELEMENTS";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quick_sort(a,0,n);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	
}
void quick_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int j=partition(a,low,high);
		quick_sort(a,low,j);
		quick_sort(a,j+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int i,j,temp;
	int pivot;
	pivot=a[low];
	i=low;
	j=high;
	while(i<j)
	{
		do
		{
			i++;
		}while(a[i]<=pivot);
		
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	a[low]=a[j];
	a[j]=pivot;
	return j;
}

