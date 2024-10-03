#include <iostream>
using namespace std;

int main(){
	
	int n;
	int positive = 0, negative = 0, odd = 0, even =0, zero = 0;
	
	cout << "enter the size of the array to count the number of positive, negative, odd and even";
	cin >> n;
	
	int arr[n];
	cout << "enter the elements of the array";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	for(int i=0; i<n ; i++){
		if(i%2==0){
			even++;
		}
		if(i%2!=0){
			odd++;
		}
		if(i == 0){
			zero++;
		}
		if(i<1){
			negative++;
		}
		if(i>=1){
			positive++;
		}
	}
	
	
	cout << "The number of positive numbers: " << positive;
	
	return 0;
}
