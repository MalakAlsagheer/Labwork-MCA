#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"how many elements you want in your array: ";
	cin>>n;
	float arr[n],sum=0;
	for(int i=0;i<n;i++)
	{
		cout<<"enter your "<<i+1<<" element: ";
		cin>>arr[i];
	}
	cout<<"Your array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
