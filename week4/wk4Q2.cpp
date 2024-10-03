#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers to perform addition of two numbers where a is less than b: ";
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
	
	
	for(int i=0; i<b; i++){
		a++;
	}

    cout << "Sum: " << a << endl;

    return 0;
}
