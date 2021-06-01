#include<iostream>
#include<cstdlib>
using namespace std;
const int rows=5;
const int cols=5;
void fillmatrix(int arr[rows][cols]);
void printrow(int arr[rows][cols]);
void transposematrix(int arr[rows][cols]);
void multiplyit(int arr[rows][cols],int arr2[rows][cols],int arr3[rows][cols]);
void multiplyrecur(int arr[rows][cols],int arr2[rows][cols],int arr3[rows][cols]);
int main()
{
	int arr[rows][cols],ch;
	int arr2[rows][cols],arr3[rows][cols];
	while(1)
	{
		printf("\n1.FILL_MATRIX\n:");
		printf("\n2.PRINT_MATRIX\n:");
		printf("\n3.TRANSPOSE\n:");
		printf("\n4.MULTIPLY_IT\n:");
		printf("\n5.MULTIPLY_RECUR\n");
		printf("enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:fillmatrix(arr);
				   break;
			case 2:printrow(arr);
					break;
			case 3:transposematrix(arr);
					break;
			case 4:multiplyit(arr,arr2,arr3);
					break;
			case 5:multiplyrecur(arr,arr2,arr3);
					break;
			default:printf("invalid");
		}
	}
	
}
void fillmatrix(int arr[rows][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arr[i][j]=rand();
		}
	}
}
void printrow(int arr[rows][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
void transposematrix(int arr[rows][cols])
{
	int i,j;
	cout<<"transpose is:"<<endl;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	
}
void multiplyit(int arr[rows][cols],int arr2[rows][cols],int arr3[rows][cols])
{
	int i,j,mul=0,k;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arr[i][j]=rand();
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arr2[i][j]=rand();
		}
	}
	for(i=0;i<rows;i++)    //row of first matrix
    { 
        for(j=0;j<cols;j++)    //column of second matrix
        {  
                       
            for(k=0;k<cols;k++)
            mul=mul+arr[i][k]*arr2[k][j];
            arr3[i][j]=mul;
        }
	}
    for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
}
void multiplyrecur(int arr[rows][cols],int arr2[rows][cols],int arr3[rows][cols])
{
	int i,j,mul=0,k;
	fillmatrix(arr2);
	printrow(arr);
	printrow(arr2);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			arr3[i][j]=0;
		}
	}
	for(i=0;i<rows;i++)    //row of first matrix
    { 
        for(j=0;j<cols;j++)    //column of second matrix
        {  
                       
            for(k=0;k<cols;k++)
            mul=mul+arr[i][k]*arr2[k][j];
            arr3[i][j]=mul;
        }
	}
    for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
}


