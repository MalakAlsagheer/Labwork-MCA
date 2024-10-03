#include <iostream>
using namespace std;

int main(){
	
	int size;
	int sum=0;
	cout << "To find the sum of all the elements in you array, ";
	cout << "enter the number of element in your array: ";
	cin >> size;
	
	int arr[size];
	cout << "enter the elements";
	for(int i = 0; i<size; i++){
		cin >> arr[i];
	}
	
	cout << "your arrary: ";
	for(int j=0; j<size; j++){
		cout << arr[j] << " ";
	}
	
	for(int j=0 ; j<size; j++){
		sum = sum + arr[j];
	}
	cout << "the sum of the elements in your array is: " << sum;
	return 0;
}
