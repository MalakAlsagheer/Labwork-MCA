#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"enter a number to check whether the number is odd or even:"<<endl;
	cin>>number;
	number%2==0?cout<<number<<" is an even number":cout<<number<<" is an odd number";
	return 0;
}
