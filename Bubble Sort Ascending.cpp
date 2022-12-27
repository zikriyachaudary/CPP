#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "Enter the Size of an Array ==>  ";
	cin >> size;
	int no1 = size-1;
	int arr[size];
	cout << "Enter "<< size <<" values :  ";
	for(int j=0; j<size; j++)
	{
		cin >> arr[j];
	}
	for(int j=0; j<size; j++)
	{
		for(int k=0;k<size-1;k++)
		{
			if(arr[k]<arr[k+1])
			{
				arr[k] = arr[k] + arr[k+1];
				arr[k+1] = arr[k] - arr[k+1];
				arr[k] = arr[k] - arr[k+1];
			}
		}
	}
	cout << "--------- After Sorting ----------" << endl;
	for(int i=0; i<size; i++)
	{
		cout << arr[i] << " " ;
	}
}
