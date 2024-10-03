#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of elements in the list: " << endl;
	cin >> n;
	int arr[n];
	cout<<"Enter numbers in your list: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int number,freq=0;
	cout<<"Enter a number: ";
	cin>>number;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==number)
		{
			freq++;
		}
	}
	if(freq==0)
	{
		cout<<"sorry the number you are finding is not in the list!";
	}
	else
	{
		cout<<"The freq of the number "<<number<<" in the list is: "<<freq;
	}
	
}
