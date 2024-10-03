#include<iostream>
using namespace std;

int main()
{
	char input;
	cout << "Would you like to perform M multiplication or A addition :";
	cin >> input;
	if(input == 'A'){
	
	int n, m;
	cout << "To find the addition between two matrices, ";
	cout << "Enter the number of rows and columns of the matrices: " << endl;
	cin>>n>>m;
	int matricesA[n][m], matricesB[n][m], result[n][m];
	
	cout << "Enter the elements of Matice A: " << endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			cin >> matricesA[i][j];
		}
	} 
	
	cout << "Enter the elements of Matice B: " << endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			cin >> matricesB[i][j];
		}
	} 
	
		for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			result[i][j] = matricesA[i][j] + matricesB[i][j];
		}
	} 
	
	
	cout << "The result matrice is: " << endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<m;j++){
			cout << result[i][j] << " ";
		}
		cout << endl;
	} 
}
else{
	int r1,c1,r2,c2;
	cout << "To find the multiplication between two matrices, ";
	cout<<"enter the row and column for Matrice A: ";
	cin>>r1>>c1;
	cout<<"enter the row and column for Matrice B: ";
	cin>>r2>>c2;
	while(c1!=r2)
	{
		cout<<"error! Column of first matrix not equal to row of second matrix.";
		cout<<"enter the row and column for array A: ";
	    cin>>r1>>c1;
	    cout<<"enter the row and column for array B: ";
	    cin>>r2>>c2;
	
	}
	int matriceA[r1][c1],matriceB[r2][c2],result[r1][c2];
	cout<<"enter elements in array A: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			cin>>matriceA[i][j];
		}
	}
	cout<<"enter elements in array B: "<<endl;
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cin>>matriceB[i][j];
		}
	}

	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			result[i][j]=0;
			for( int k=0;k<c1;k++)
			{
				result[i][j]=result[i][j]+matriceA[i][k]*matriceB[k][j];
			}
			
		}
	}
	cout<<"elements in array C: "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			cout<<result[i][j]<<" ";
			if(j==c2-1)
			{
				cout<<endl;
			}
		}
	}
}
	
	return 0;
}
