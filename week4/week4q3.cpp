#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, f, g, result;
	cout << "To evaluate the expression ((a+b/c*d-e)*(f-g)): " << endl;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	cout << "Enter the value of d: ";
	cin >> d;
	cout << "Enter the value of e: ";
	cin >> e;
	cout << "Enter the value of f: ";
	cin >> f;
	cout << "Enter the value of g: ";
	cin >> g;
	
	result = ((a+b/c*d-e)*(f-g));
	cout << "The result of the expression ((a+b/c*d-e)*(f-g)) is : " << result;
}
