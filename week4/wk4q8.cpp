#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout << "To chech whether a given number is armstrong or not: " << endl;
	cout<<"enter a number: ";
	cin>>n;
	
	int rem,power,sum=0,lastdigit;
	int number=n;
	int original=n;
	while(n>0)
	{
		rem=n%10;
		power++;
		n=n/10;
	}
	while(number>0)
	{
		lastdigit=number%10;
		sum+=pow(lastdigit,power);
		number=number/10;
	}
	if(sum==original)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not an armstrong";
	}
}
