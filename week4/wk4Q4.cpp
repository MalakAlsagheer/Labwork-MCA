#include<iostream>
using namespace std;

int main()
{
	int first, second,n,count,next;
	cout<<"To generate the fibonacci sequence enter the nth term: ";
	cin>>n;
	first=0;
	second=1;
	count=1;

	if(n == 1){
		cout << first;
	}else{
		cout<<first<<" ";
		cout<<second<<" ";
		while(count<n-1)
		{
		next=first+second;
		cout<<next<<" ";
		first=second;
		second=next;;
		count++;
		}
	}
	
}
