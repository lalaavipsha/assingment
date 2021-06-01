#include<iostream>
#include<cstdlib>
using namespace std;
const int rows=5;
const int cols=5;
void fillmatrix();
int main()
{
	int arr[rows][cols];
	fillmatrix();
	
}
void fillmatrix()
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<rand()<<" ";
		}
		cout<<endl;
	}
}
