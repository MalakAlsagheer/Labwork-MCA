#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "To find the second largest element in an array, ";
	cout<<"Enter how many elements you want in your array: ";
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter your "<<i+1<<" element: ";
		cin>>arr[i];
	}
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	int lg = arr[n-1];
	for(int i = arr[n-2] ; i >=0; i--){
		if(arr[i] < lg){
			cout << "The second largest number is: " << arr[i];
			break;
		}
	}
	
	return 0;
}
	
		
