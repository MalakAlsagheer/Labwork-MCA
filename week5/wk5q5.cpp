#include<iostream>
using namespace std;

int main()
{
	int n=5,arr[n]={1,2,3,4,5};
	cout<<"your array is :";
	int temp;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;	
	}

	cout<<endl;
	cout<<"your reverse array is ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
