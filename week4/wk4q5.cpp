#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	bool flag;
	cout<<"To find the prime numbers between 1 and n enter the nth number: ";
	cin>>n;
	cout<<"The prime number between 1 and "<<n<<endl;
	if(n==1){
		cout << "Enter a number greater than 1 since its not a valid input";
	}
	
	if(n == 2){
		cout << "2";
	}
	for(int i=1;i<=n;i++)
	{
		count=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0 && i > 2)
		{
			cout<<i<<" ";
		}
	}
}
