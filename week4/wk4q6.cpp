#include<iostream>
using namespace std;

int main()
{
	char letter;
	cout<<"To determine whether the entered character is a captial letter, small letter, a digit or a special symbol " << endl;
	cout<<"Enter a character: ";
	cin>>letter;
	if(letter>=65&&letter<=90)
	{
		cout<<"you entered a Capital letter "<<letter;
	}
	else if(letter>=97&&letter<=122)
	{
		cout<<"you enter a small letter "<<letter;
	}
	else if(letter>=48&&letter<=57)
	{
		cout<<"you entered a number "<<letter;
	}
	else
	{
		cout<<"you entered a special character "<<letter;
	}
}
