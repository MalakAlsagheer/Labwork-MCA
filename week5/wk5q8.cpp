#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"number of elements you want in array 1: ";
	cin>>n1;
	cout<<"number of elements you want in array 2: ";
	cin>>n2;
	int arr1[n1],arr2[n2];
	cout<<"enter "<<n1<<" elements in array 1 in sorted order: "<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"enter "<<n2<<" elements in array 2 in sorted order: "<<endl;
	for(int i=0;i<n2;i++)
	{
		cin>>arr2[i];
	}
	int n3=n1+n2;
	int arr3[n3];
	
	for(int i=0;i<n1;i++){
	  arr3[i] = arr1[i];
	}
	for(int i=0;i<n2;i++){
	  arr3[n1+i] = arr2[i];
	}
	for(int i=0;i<n3 ;i++){
		for(int j=0; j<n3-i-1;j++){
			if(arr3[j] > arr3[j+1]){
				int temp = arr3[j];
				arr3[j] = arr3[j+1];
				arr3[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<n3;i++)
	{
		cout<<arr3[i]<<" ";
	}
	
}
